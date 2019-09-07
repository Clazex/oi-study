#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define uns unsigned
#define reg register

#define INF (0x3f3f3f3f)

#define MAXN (105)
#define MAXM (1000)

int g[MAXM] = {0}, f[MAXN] = {0}, v[MAXN] = {0};

int main(){
	int t, n;
	scanf(" %d %d", &t, &n);
	
	for(int i = 1; i <= n; i++){
		scanf(" %d %d", &f[i], &v[i]);
	}
	
	int criterium;
	for(int i = 1; i <= n; i++){
		for(int j = t; j >= 0; j--){
			criterium = j - f[i];
			if(criterium >= 0) g[j] = max(g[criterium] + v[i], g[j]);
		}
	}
	
	printf("%d\n", g[t]);
	
	return 0;
}

