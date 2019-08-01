#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int path[22];

void dfs(int last, int sum, int step){
	if(sum == 0){
		if(step == 0){
			return;
		}
		printf("%d", path[0]);
		for(int i = 1; i <= step; i++){
			printf("+%d", path[i]);
		}
		printf("\n");
		return;
	}
	
	for(int i = last; i <= sum; i++){
		path[step + 1] = i;
		dfs(i, sum - i, step + 1);
	}
	
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	
	dfs(1, n, -1);
	
	return 0;
}
