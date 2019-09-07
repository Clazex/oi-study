#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define uns unsigned
#define reg register

#define INF (0x3f3f3f3f)

#define MAXN (101)

int f[MAXN][MAXN];

int parseInt(char m[]){
	reg int l = strlen(m), n = 0;
	for(reg int i = 0; i < l; i++){
		n *= 10;
		n += m[i] - '0';
	}
	return n;
}

int main(){
	reg int n;
	scanf("%d", &n);
	
	char x[20];
	for(reg short i = 1; i <= n; i++){
		for(reg short j = 1; j < i; j++){
			scanf(" %s", x);
			if(x[0] == 'x'){
				f[i][j] = f[j][i] = INF;
			} else {
				f[i][j] = f[j][i] = parseInt(x);
			}
		}
	}
	
	for(reg short i = 1; i <= n; i++){
		f[i][i] = 0;
	}
	
	for(reg short k = 1; k <= n; k++){
		for(reg short i = 1; i <= n; i++){
			for(reg short j = 1; j <= n; j++){
				f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
        	}
        }
	}
	
	reg int ans = 0;
	for(reg short i = 1; i <= n; i++){
		if(f[1][i] > ans){
			ans = f[1][i];
		}
	}
	
	printf("%d\n", ans);
	
	return 0;
}

