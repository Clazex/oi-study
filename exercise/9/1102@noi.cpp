#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int t[501][501] = {0}, n, m;

int c(int x, int y){
	for(int i = 1; i <= m; i++){
		swap(t[x][i], t[y][i]);
	}
	return 0;
}

int q(int x, int y){
	printf("%d\n", t[x][y]);
	return 0;
}

int main(){
	char o;
	int a, x, y, i, j;
	scanf("%d %d", &n, &m);
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= m; j++){
			scanf("%d", &t[i][j]);
		}
	}
	
	scanf("%d", &a);
	
	for(i = 0; i < a; i++){
		scanf(" %c %d %d", &o, &x, &y);
		if(o == 'C') c(x, y);
		else if(o == 'Q') q(x, y);
	}
	
	return 0;
}
