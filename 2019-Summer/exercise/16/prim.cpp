#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <ctime>
using namespace std;
#define ll long long
#define inf (0x3f3f3f3f)

#define MAXN (105)

bool book[MAXN] = {0};
int map[MAXN][MAXN], dis[MAXN];
int n, m, len = 0;

void prim(int s){
	for(int i = 1; i <= n; i++){
		dis[i] = map[s][i];
	}
	book[s] = true;
	
	for(int j = 0; j < n - 1; j++){
		int minIndex = 0, minNum = inf + 1;
		for(int i = 1; i <= n; i++){
			if(!book[i] && minNum > dis[i]){
				minIndex = i;
				minNum = dis[i];
			}
		}
		book[minIndex] = true;
		
		len += minNum;
		for(int i = 1; i <= n; i++){
			if(!book[i]){
				dis[i] = min(dis[i], map[minIndex][i]);
			}
		}
	}
	
	return;
}

int main(){
	scanf("%d %d", &n, &m);
	
	memset(map, inf, sizeof(map));
	
	int a, b, c;
	for(int i = 0; i < m; i++){
		scanf("%d %d %d", &a, &b, &c);
		map[a][b] = min(map[a][b], c);
		map[b][a] = map[a][b];
	}
	
	for(int i = 1; i <= n; i++){
		map[i][i] = 0;
	}
	
	prim(rand() % n);
	
	printf("%d\n", len);
	
	return 0;
}
