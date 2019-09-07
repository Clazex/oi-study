#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <vector>
using namespace std;
#define ll long long
#define uns unsigned
#define reg register

#define INF (0x3f3f3f3f)

#define MAXN (1002)

int n, m, x, f[MAXN][MAXN], t[MAXN];

void rswap(int& a, int& b){
	reg int t = a;
	a = b, b = t;
	return;
}

void transpose(int n){
	for(reg int i = 1; i <= n; i++){
		for(reg int j = 1; j < i; j++){
			rswap(f[i][j], f[j][i]);
		}
	}
	return;
}

void dijkstra(int x){
	bool book[MAXN] = {0};
	
	book[s] = true;
	
	for(reg int j = 0; j < n - 1; j++){
		int minIndex = 0, minNum = INF + 1;
		for(reg int i = 1; i <= n; i++){
			if(!book[i] && minNum > f[s][i]){
				minIndex = i;
				minNum = f[s][i];
			} 
		}
		book[minIndex] = true;
		
		t[minIndex] += minNum;
		
		for(reg int i = 1; i <= n; i++){
			f[s][i] = min(f[s][i], f[s][minIndex] + f[minIndex][i]);
		}
	}
	
	return;
}

int main(){
	scanf("%d %d %d", &n, &m, &x);
	
	memset(f, INF, sizeof(f));
	
	int a, b, c;
	for(reg int i = 0; i < m; i++){
		scanf("%d %d %d", &a, &b, &c);
		f[a][b] = min(f[a][b], c);
	}
	
	for(reg int i = 1; i <= n; i++){
		f[i][i] = 0;
	}
	
	dijkstra(x);
	
	transpose(n);
	
	dijkstra(x);
	
	printf("%d\n", *max_element(t + 1, t + n + 1));
	
	return 0;
}
