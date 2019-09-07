#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
#define inf 0x3f3f3f3f

int f[1005][1005];

int main(){
	int n, m;
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
	
	for(int i = 1; i <= n; i++){
		for(int s = 1; s <= n; s++){
			for(int e = 1; e <= n; e++){
				//printf("%d %d %d, %d %d\n", i, s, e, f[s][e], f[s][i] + f[i][e]);
				f[s][e] = min(f[s][e], f[s][i] + f[i][e]);
			}
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(f[i][j] != inf){
				printf("%d	", f[i][j]);
			} else {
				printf("+¡Þ	");
			}
		}
		printf("\n");
	}
	
	return 0;
}
