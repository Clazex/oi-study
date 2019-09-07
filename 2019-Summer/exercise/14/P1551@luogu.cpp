#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int f[5005];

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

bool checkAggregate(int a, int b){
	int x = findLeader(a);
	int y = findLeader(b);
	
	if(x != y){
		return false;
	}
	
	return true;
}

int main(){
	int n, m, p, a, b;
	scanf("%d %d %d", &n, &m, &p);
	
	for(int i = 1; i <= n; i++){
		f[i] = i;
	}
	
	for(int i = 0; i < m; i++){
		scanf("%d %d", &a, &b);
		mergeAggregate(a, b);
	}
	
	for(int i = 0; i < p; i++){
		scanf("%d %d", &a, &b);
		if(checkAggregate(a, b)){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	}
	
	return 0;
}
