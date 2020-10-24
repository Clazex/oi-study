#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
#define ll long long
#define uns unsigned
#define reg register

#define INF (0x3f3f3f3f)

#define MAXN (10002)

int a[MAXN], b[MAXN], g[MAXN], k[MAXN];

int main(){
	int n, x, y;
	
	scanf(" %d", &n);
	
	for(int i = 1; i <= n; i++){
		scanf(" %d %d %d %d", &a[i], &b[i], &g[i], &k[i]);
	}
	
	scanf(" %d %d", &x, &y);
	
	for(int i = n; i >= 1; i--){
		if(x >= a[i] && y >= b[i] && x <= a[i] + g[i] && y <= b[i] + k[i]){
			printf("%d\n", i);
			return 0;
		}
	}
	
	printf("-1\n");
	return 0;
}

