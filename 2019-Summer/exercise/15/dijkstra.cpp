#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

const int inf = 0x3f3f3f3f;
const int x = 1;
const int maxn = 105;

bool book[maxn] = {0};
int f[maxn][maxn], dis[maxn];
int n, m;

void dij(int s){
	for(int i = 1; i <= n; i++){
		dis[i] = f[s][i];
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
		
		for(int i = 1; i <= n; i++){
			dis[i] = min(dis[i], dis[minIndex] + f[minIndex][i]);
		}
	}
	
	return;
}

int main(){
	scanf("%d %d", &n, &m);
	
	memset(f, inf, sizeof(f));
	
	int a, b, c;
	for(int i = 0; i < m; i++){
		scanf("%d %d %d", &a, &b, &c);
		f[a][b] = min(f[a][b], c);
	}
	
	for(int i = 1; i <= n; i++){
		f[i][i] = 0;
	}
	
	dij(x);
	
	for(int i = 1; i <= n; i++){
		if(dis[i] != inf){
			printf("%d	", dis[i]);
		} else {
			printf("+¡Þ	");
		}
	}
	printf("\n");
	
	return 0;
}
