#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int f[1005];

int findLeader(int index){
	if(f[index] != index){
		return f[index] = findLeader(f[index]);
	}
	return index;
}

void mergeAggregate(int a, int b){
	int x = findLeader(a);
	int y = findLeader(b);
	
	if(x != y){
		f[x] = y;
	}
	
	return;
}

int main(){
	int n, m, count = 0;
	scanf("%d %d", &n, &m);
	
	for(int i = 1; i <= n; i++){
		f[i] = i;
	}
	
	int a, b;
	for(int i = 0; i < m; i++){
		scanf("%d %d", &a, &b);
		mergeAggregate(a, b);
	}
	
	for(int i = 1; i <= n; i++){
		//printf("%d ", f[i]);
		if(f[i] == i)
			count++;
	}
	
	printf("%d\n", count);
	
	return 0;
}
