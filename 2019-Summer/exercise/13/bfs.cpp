#include <cstdio>
#include <vector>
using namespace std;

struct node{
	int x, y, step, last;
};

int n, m, sx, sy, ex, ey, dir[4][2] = {-1, 0, 0, 1, 1, 0, 0, -1};
char map[101][101];
bool book[101][101] = {0};
vector<node> queue;

node newNode(int x, int y, int step, int last){
	register node i;
	i.x = x, i.y = y, i.step = step, i.last = last;
	return i;
}

bool check(int x, int y){
	if(x < 0 || y < 0 || x >= n || y >= m || map[x][y] == 'X' || book[x][y]){
		return false;
	}
	return true;
}

void printTrack(int index){
	if(index != 0){
		printTrack(queue[index].last);
	}
	printf("(%d, %d)\n", queue[index].x, queue[index].y);
	return;
}

int bfs(int sx, int sy){
	register unsigned int head = 0;
	register int nx, ny;
	node s = newNode(sx, sy, 1, 0);
	queue.push_back(s);
	book[sx][sy] = true;
	while(head < queue.size()){
		node t = queue[head++];
		
		//printf("Going to (%d, %d), %d step\n", temp.x, temp.y, temp.step);
		
		if(t.x == ex && t.y == ey){
			printTrack(head - 1);
			return t.step;
		}
		
		for(int i = 0; i < 4; i++){
			nx = t.x + dir[i][0], ny = t.y + dir[i][1];
			
			if(check(nx, ny)){
				book[nx][ny] = true;
				node n = newNode(nx, ny, t.step + 1, head - 1);
				queue.push_back(n);
			}
		}
	}
	
	return -1;
}

int main(){
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++){
		scanf(" %s", map[i]);
	}
	
	sx = 0, sy = 0;
	ex = n - 1, ey = m - 1;
	
	printf("%d\n", bfs(sx, sy));
	
	return 0;
}
