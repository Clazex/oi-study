#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

struct cood {
	int x, y;
}path[10005];
int n, m, sx, sy, ex, ey, stepMin = 10001;
char map[101][101];
int book[101][101] = {0};
int dir[4][2] = {0, 1, 0, -1, 1, 0, -1, 0};

bool check(int x, int y){
	if(x < 0 || y < 0 || x >= n || y >= m || book[x][y] == 1 || map[x][y] == 'X') return false;
	return true;
}

void dfs(int x, int y, int step){
	path[step].x = x, path[step].y = y;
	
	if(x == ex && y == ey){
		for(int i = 1; i <= step; i++){
			printf("(%d, %d)\n", path[i].x, path[i].y);
		}
		cout << endl << endl;
		if(step < stepMin){
			stepMin = step;
		}
		return;
	}
	
	int nx, ny;
	for(int i = 0; i < 4; i++){
		nx = x + dir[i][0];
		ny = y + dir[i][1];
		
		if(check(nx, ny)){
			book[nx][ny] = 1;
			dfs(nx, ny, step + 1);
			book[nx][ny] = 0;
		}
	}
	
	return;
}

int main(){
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		cin >> map[i];
	}
	
	sx = 0, sy = 0;
	ex = n - 1, ey = m - 1;
	
	book[sx][sy] = 1;
	
	dfs(sx, sy, 1);
	
	if(stepMin == 10001){
		cout << -1 << endl;
		return 0;
	}
	
	cout << stepMin << endl;
	
	return 0;
}
