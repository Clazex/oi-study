#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

struct cood{
	int x, y, z, step;
};

int l, r, c, sx, sy, sz, ex, ey, ez;
int dir[6][3] = {-1, 0, 0, 1, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, -1, 0, 0, 1};
char map[30][30][30];

int bfs(int sx, int sy, int sz, int l, int r, int c){
	int head = 0, tail = 0;
	int book[l][r][c] = {0};
	
	cood queue[l * r * c + 1];
	
	cood start;
	start.x = sx, start.y = sy, start.z = sz, start.step = 0;
	queue[tail++] = start;
	book[sx][sy][sz] = 1;
	
	while(head < tail){
		cood temp = queue[head];
		head++;
		
		if(temp.x == ex && temp.y == ey && temp.z == ez){
			book[sx][sy][sz] = 0;
			
			return temp.step;
		}
		
		int nx, ny, nz;
		for(int i = 0; i < 6; i++){
			nx = temp.x + dir[i][0], ny = temp.y + dir[i][1], nz = temp.z + dir[i][2];
			
			if(!(nx < 0 || ny < 0 || nz < 0 || nx >= l || ny >= r || nz >= c || map[nx][ny][nz] == '#' || book[nx][ny][nz] == 1)){
				book[nx][ny][nz] = 1;
				cood t;
				t.x = nx, t.y = ny, t.z = nz, t.step = temp.step + 1;
				queue[tail++] = t;
			}
		}
	}
	
	
	book[sx][sy][sz] = 0;
	return -1;
}

int main(){
	while(true){
		scanf(" %d %d %d", &l, &r, &c);
		
		if(l == 0 && r == 0 && c == 0) break;
		if(l == 0 || r == 0 || c == 0){
			printf("Trapped!\n");
			continue;
		}
		
		bool flags = true, flage = true;
		for(int i = 0; i < l; i++){
			for(int j = 0; j < r; j++){
				for(int k = 0; k < c; k++){
					scanf(" %c", &map[i][j][k]);
					if(flags && map[i][j][k] == 'S'){
						sx = i, sy = j, sz = k;
						flags = false;
					}
					if(flage && map[i][j][k] == 'E'){
						ex = i, ey = j, ez = k;
						flage = false;
					}
				}
			}
		}
		
		int ans = bfs(sx, sy, sz, l, r, c);
		
		if(ans == -1){
			printf("Trapped!\n");
		}
		else{
			printf("Escaped in %d minute(s).\n", ans);
		}
	}
	
	return 0;
}
