#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

struct code{
	int l, c;
};

int b[1000];
code r[1000];

bool comp(int a, int b, int l){
	while(l != 0){
		if(a % 10 != b % 10) return false;
		l--;
		a /= 10;
		b /= 10;
	}
	return true;
}

int main(){
	int n, q, i, j;
	scanf("%d %d", &n, &q);
	
	for(i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	
	sort(b, b + n);
	
	for(i = 0; i < q; i++){
		scanf("%d %d", &r[i].l, &r[i].c);
		
		for(j = 0; j < n; j++){
			if(comp(r[i].c, b[j], r[i].l)){
				printf("%d\n", b[j]);
				break;
			}
		}
		if(j == n){
			printf("-1\n");
		}
	}
	
	return 0;
}
