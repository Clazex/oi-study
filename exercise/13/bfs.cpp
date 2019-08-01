#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

struct cood{
	int x, y, step, last;
}queue[10001];
int n, m, sx, sy, ex, ey, dir[4][2] = {-1, 0, 0, 1, 1, 0, 0, -1};
char map[101][101];
int book[101][101] = {0};

bool check(int x, int y){
	if(x < 0 || y < 0 || x >= n || y >= m || map[x][y] == 'X' || book[x][y] == 1){
		return false;
	}
	return true;
}

void print(int index){
	if(index == 0){
		printf("(%d, %d)\n", queue[index].x, queue[index].y);
	}
	else{
		print(queue[index].last);
		printf("(%d, %d)\n", queue[index].x, queue[index].y);
	}
}

int bfs(int sx, int sy){
	int head = 0, tail = 0;
	cood start;
	start.x = sx, start.y = sy, start.step = 1, start.last = 0;
	queue[tail++] = start;
	book[sx][sy] = 1;
	while(head < tail){
		cood temp = queue[head];
		head++;
		
		//printf("Going to (%d, %d), %d step\n", temp.x, temp.y, temp.step);
		
		if(temp.x == ex && temp.y == ey){
			print(head - 1);
			return temp.step;
		}
		
		int nx, ny;
		for(int i = 0; i < 4; i++){
			nx = temp.x + dir[i][0], ny = temp.y + dir[i][1];
			
			if(check(nx, ny)){
				book[nx][ny] = 1;
				cood t;
				t.x = nx, t.y = ny, t.step = temp.step + 1, t.last = head - 1;
				queue[tail++] = t;
			}
		}
	}
	
	return -1;
}

int main(){
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++){
		cin >> map[i];
	}
	
	sx = 0, sy = 0;
	ex = n - 1, ey = m - 1;
	
	book[sx][sy] = 1;
	
	cout << bfs(sx, sy) << endl;
	
	return 0;
}
