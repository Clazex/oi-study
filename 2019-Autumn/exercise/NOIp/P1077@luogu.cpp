#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
//#include <iostream>
using namespace std;
#define ll long long
#define uns unsigned
#define reg register

#define INF (0x3f3f3f3f)

#define MAXN (101)
#define MAXM (101)

const int mod = 1000007;

int plan[MAXM] = {1}, n, m, a[MAXN];

int main(){
	scanf(" %d %d", &n, &m);
	
	for(int i = 1; i <= n; i++){
		scanf(" %d", &a[i]); 
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = m; j >= 0; j--){
			int v = min(a[i], j);
			for(int k = 1; k <= v; k++){
				plan[j] = (plan[j] + plan[j - k]) % mod;
			}
		}
	}
	
	printf("%d\n", plan[m]);
	
	return 0;
}

