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
#define MAXM (6000)

int g[MAXN][MAXM] = {1};
int f[MAXN] = {0};

int main(){
	int n;
	scanf(" %d", &n);
	
	for(int i = 1; i <= n; i++){
		scanf(" %d", &f[i]);
	}
	
	int currentMax = 0, criterium;
	for(int i = 1; i <= n; i++){
		currentMax += f[i];
		for(int j = 0; j <= currentMax; j++){
			criterium = j - f[i];
			if(criterium >= 0) g[i][j] = g[i - 1][criterium];
			else g[i][j] = g[i - 1][j];
		}
	}
	
	reg int ans = 0;
	for(int i = 1; i <= currentMax; i++){
		ans += g[n][i];
	}
	
	printf("%d\n", ans);
	
	return 0;
}

