#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

struct p{
	int s, d;
};

bool cmp(p a, p b){//WIP
	if(a.d != b.d) return a.d < b.d;
	else return a.s > b.s;
}

int main(){
	int k;
	scanf("%d", &k);
	
	for(int w = 0; w < k; w++){
		int n, i, u = 1, s = 0;
		scanf("%d", &n);
		
		p a[n];
		
		for(i = 0; i < n; i++){
			scanf("%d", &a[i].d);
		}
		
		for(i = 0; i < n; i++){
			scanf("%d", &a[i].s);
		}
		
		sort(a, a + n, cmp);
		
		for(i = 0; i < n; i++){
			printf("[D]%d %d\n", a[i].d, a[i].s);
		}
		
		printf("\n");
		
		for(i = 1; i < n; i++){
			printf("[D]%d\n", u);
			if(u + 1 <= a[i].d){
				u++;
				continue;
			}
			s += a[i].s;
		}
		
		printf("%d\n", s);
	}
	
	return 0;
}
