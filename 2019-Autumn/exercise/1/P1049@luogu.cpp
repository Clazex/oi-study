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

#define MAXN (35)
#define MAXM (20000)

int g[MAXN][MAXM] = {0}, f[MAXN] = {0};

int main(){
	int v, n;
	scanf(" %d %d", &v, &n);
	
	for(int i = 1; i <= n; i++){
		scanf(" %d", &f[i]);
	}
	
	int criterium;
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= v; j++){
			criterium = j - f[i];
			if(criterium >= 0) g[i][j] = max(g[i - 1][criterium] + f[i], g[i - 1][j]);
			else g[i][j] = g[i - 1][j];
		}
	}
	
	printf("%d\n", v - g[n][v]);
	
	return 0;
}

