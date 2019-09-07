#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int f[150002];
int num = 0;
int n, m, p;

void init(){
	for(int i = 0; i <= 3 * n + 1; i++){
		f[i] = i;
	}
	return;
}

int trace(int index){
	if(f[index] == index){
		return index;
	}
	return f[index] = trace(f[index]);
}

bool check(int a, int b){
	return trace(a) == trace(b);
}

void mergeAggregate(int a, int b){
	int x = trace(a);
	int y = trace(b);
	
	if(x != y){
		f[x] = y;
	}
	
	return;
}

int main(){
	scanf("%d %d", &n, &m);
	p = 2 * n;
	
	init();
	
	int x, a, b;
	for(; m; m--){
		scanf("%d %d %d", &x, &a, &b);
		if(a > n || b > n){
			num++;
			continue;
		}
		else if (x == 1) {
            if (check(a + n, b) || check(a, b + n)){
				num++; 
			}
            else {
            	mergeAggregate(a, b);
            	mergeAggregate(a + n, b + n);
            	mergeAggregate(a + p, b + p);
            }
        } else {
            if (check(a, b) || check(a, b + n)){
				num++;
			}
            else {
            	mergeAggregate(a, b + p);
            	mergeAggregate(a + n, b);
            	mergeAggregate(a + p, b + n);
            }
        }
	}
	
	printf("%d\n", num);
	
	return 0;
}
