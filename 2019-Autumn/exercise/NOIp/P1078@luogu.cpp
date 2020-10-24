#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
//#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define uns unsigned
#define reg register

#define INF (0x3f3f3f3f)

#define MAXN (102)
#define MAXK (102)
#define MAXM (10202)

int f[MAXN][MAXN], n, k, m, s, t, c[MAXN];
bool d[MAXK][MAXK] = {0}, learnt[MAXK] = {0};

void dijkstra(int s){
	bool book[n + 1] = {0};
	book[s] = true;
	learnt[c[s]] = true;
	
	for(int j = 0; j < n - 1; j++){
		int minIndex = 1, minNum = INF + 1;
		for(int i = 1; i <= n; i++){
			if(!book[i] && !learnt[c[i]] && minNum > f[s][i]){
				minNum = f[s][i];
				minIndex = i;
			}
			
			book[minIndex] = true;
			for(int i = 1; i <= n; i++){
				if(!book[i] && !learnt[c[i]]){
					f[s][i] = min(f[s][i], f[s][minIndex] + f[minIndex][i]);
				}
			}
		}
	} 
	
	return;
}

int main(){
	scanf(" %d %d %d %d %d", &n, &k, &m, &s, &t);
	
	reg int x;
	for(reg int i = 1; i <= n; i++){
		scanf(" %d", &x);
		c[i] = x;
	}
	
	if(c[s] == c[t]){
		printf("-1");
		return 0;
	}
	
	for(reg int i = 1; i <= k; i++){
		for(reg int j = 1; j <= k; j++){
			scanf(" %d", &x);
			if(x) d[i][j] = true;
		}
	}
	
	memset(f, INF, sizeof(f));
	
	int u, v, w;
	for(reg int i = 0; i < m; i++){
		scanf(" %d %d %d", &u, &v, &w);
		f[v][u] = f[u][v] = min(w, f[u][v]);
	}
	
	for(reg int i = 1; i <= n; i++){
		f[i][i] = 0;
	}
	
	for(reg int i = 1; i <= k; i++){
		for(reg int j = 1; j <= k; j++){
			if(d[c[i]][c[j]]) f[j][i] = INF;
		}
	}
	
	dijkstra(s);
	
	printf("%d\n", f[s][t] != INF ? f[s][t] : -1);
	
	return 0;
}

