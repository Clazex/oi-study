#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int n, num, emp, cnt;
int book[2][8];

char map[8][8];

bool check(int x, int y){
	if(book[0][x] == 1 || book[1][y] == 1 || map[x][y] == '.') return false;
	return true;
}

void dfs(int x, int y, int step){
	if(step == num){
		cnt++;
		return;
	}
	
	for(int i = x + 1; i < n; i++){
		for(int j = 0; j < n; j++){
			if(check(i, j)){
				book[0][i] = 1, book[1][j] = 1;
				dfs(i, j, step + 1);
				book[0][i] = 0, book[1][j] = 0;
			} 
		}
	}
	
	return;
}

int main(){
	while(true){
		emp = 0, cnt = 0;
		for(int i = 0; i < 8; i++){
			book[0][i] = 0, book[1][i] = 0;
		}
		
		cin >> n >> num;
		
		if(n == -1 && num == -1) break;
		
		bool flag = false;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> map[i][j];
				if(map[i][j] == '#') {
					emp++;
				}
			}
		}
		
		if(num > emp){
			cout << -1 << endl;
			return 0;
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(map[i][j] == '#'){
					dfs(i, j, 1);
					break;
				}
			}
		}
		
		cout << cnt << endl;
	}
	return 0;
}
