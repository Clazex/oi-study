#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

struct person{
	int n, d, w;
};

bool cmp(person a, person b){
	if(a.w != b.w) return a.w > b.w;
	return a.n < b.n;
}

int main(){
	int i, n, k, e[10];
	
	scanf("%d %d", &n, &k);
	
	person p[n];
	
	scanf("%d %d %d %d %d %d %d %d %d %d", &e[0], &e[1], &e[2], &e[3], &e[4], &e[5], &e[6], &e[7], &e[8], &e[9]);
	
	for(i = 0; i < n; i++){
		scanf("%d", &p[i].w);
		p[i].n = i + 1;
	}
	
	sort(p, p + n, cmp);
	
	for(i = 0; i < n; i++){
		p[i].d = i + 1;
		p[i].w += e[(p[i].d - 1) % 10];
	}
	
	sort(p, p + n, cmp);
	
	for(i = 0; i < k; i++){
		printf("%d ", p[i].n);
	}
	
	printf("\n");
	
	return 0;
}
