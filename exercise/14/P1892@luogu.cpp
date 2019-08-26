#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

struct Pair{
	int a, b;
};

Pair format(Pair i){
	if(i.a > i.b){
		swap(i.a, i.b);
	}
	return i;
}

int f[1002], e[1002] = {0};

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
	
	char operate;
	Pair p;
	for(int i = 0; i < m; i++){
		scanf(" %c %d %d", &operate, &p.a, &p.b);
		p = format(p);
		if(operate == 'F'){
			mergeAggregate(p.a, p.b);
		}
		else{
			if(e[p.a] == 0){
				e[p.a] = p.b;
			}
			else{
				Pair q;
				
				q.a = e[p.a], q.b = p.b;
				q = format(q);
				mergeAggregate(q.a, q.b);
				
				if(e[p.b] != 0){
					q.a = p.a, q.b = e[p.b];
					q = format(q);
					mergeAggregate(q.a, q.b);
				}
			}
		}
	}
	
	for(int i = 1; i <= n; i++){
		if(f[i] == i)
			count++;
	}
	
	printf("%d\n", count);
	
	return 0;
}
