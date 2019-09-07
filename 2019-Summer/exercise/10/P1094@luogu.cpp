#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int w, n, i, j, sum = 0;
	scanf("%d %d", &w, &n);
	int a[n], p = 0, q = n - 1;
	
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	sort(a, a + n);
	
	while(p <= q){
		if(a[p] + a[q] <= w){
			p++;
		}
		q--, sum++;
	}
	
	printf("%d\n", sum);
	
	return 0;
}
