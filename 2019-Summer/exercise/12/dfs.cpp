#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int n, m, sx, sy, ex, ey, ans = 0;
int dir[4][2] = {-1, 0, 0, 1, 1, 0, 0, -1};
char map[105][105];
int book[105][105] = {0};

bool check(int x, int y){
	if(x < 0 || y < 0 || x >= n || y >= m || map[x][y] == 'X' || book[x][y] == 1){
		return false;
	}
	return true;
}

void dfs(int x, int y){
	printf("Going to (%d, %d)\n", x, y);
	
	if(x == ex && y == ey){
		ans++;
		return;
	}
	
	int nx, ny;
	for(int i = 0; i < 4; i++){
		nx = x + dir[i][0], ny = y + dir[i][1];
		if(check(nx, ny)){
			book[nx][ny] = 1;
			dfs(nx, ny);
			book[nx][ny] = 0;
		}
	}
	
	printf("Going Back...\n");
	
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
	
	dfs(sx, sy);
	
	cout << ans << endl;
	
	return 0;
}
