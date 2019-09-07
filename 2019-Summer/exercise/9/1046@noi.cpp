#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int n, x, y, step = 1, a[101][101];

int refreshPointer(){
	x += step, y -= step;
	if (x >= n && y < 0){
		x -= 1, y += 2, step *= -1;
	}
	else if (x<0 && y>=n){
		x += 2, y -= 1, step *= -1;
	}
	else if (y < 0 || y >= n){
		y += (y < 0) ? 1 : -1;
		if (y >= n-1) x += 2;
		step *= -1;
	}
	else if (x < 0 || x >= n){
		x += (x < 0) ? 1 : -1;
		if (x >= n - 1)	y += 2;
		step *= -1;
	}
	return 0;
}

int main(){
	int i, j;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n * n; i++){
		a[x][y] = i;
		refreshPointer();
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	 
	return 0;
}
