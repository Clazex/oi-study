#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

struct p{
	int n, t;
};

bool cmp(p a, p b){
	return a.t < b.t;
}

int main(){
	int n, i;
	double b;
	scanf("%d", &n);
	p a[n + 1];
	
	a[0].t = 0;
	
	for(i = 1; i <= n; i++){
		scanf("%d", &a[i].t);
		a[i].n = i;
	}
	
	sort(a + 1, a + n + 1, cmp);
	
	for(i = 1; i <= n; i++){
		printf("%d ", a[i].n);
		b += a[i].t * (n - i);
	}
	
	printf("\n%.2lf", b / n);
	
	return 0;
}
