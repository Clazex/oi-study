#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

struct person{
	int n, s, w;
};

bool cmp(person a, person b){
	if(a.s != b.s) return a.s > b.s;
	return a.n < b.n;
}

int main(){
	int i, n, r, q;
	
	scanf("%d %d %d", &n, &r, &q);
	
	int m = 2 * n;
	
	person s[m];
	
	for(i = 0; i < m; i++){
		s[i].n = i;
		scanf("%d", &s[i].s);
	}
	
	for(i = 0; i < m; i++){
		scanf("%d", &s[i].w);
	}
	
	sort(s, s + m, cmp);
	
	while(r--){
		person a[n], b[n];
		int x = 0;
		
		for(i = 0; i < m; i += 2, x++){
			if(s[i].w > s[i + 1].w){
				a[x].n = s[i].n, a[x].w = s[i].w, a[x].s = s[i].s + 1;
				b[x].n = s[i + 1].n, b[x].w = s[i + 1].w, b[x].s = s[i + 1].s;
			}
			else{
				b[x].n = s[i].n, b[x].w = s[i].w, b[x].s = s[i].s;
				a[x].n = s[i + 1].n, a[x].w = s[i + 1].w, a[x].s = s[i + 1].s + 1;
			}
		}
		
		merge(a, a + n, b, b + n, s, cmp);
		
		/*
		int p = 0, q = 0, r = 0;
		
		while(q < n && r < n){
			if(cmp(a[q], b[r])){
				s[p].n = a[q].n;
				s[p].w = a[q].w;
				s[p].s = a[q].s;
				p++, q++;
			}
			else{
				s[p].n = b[r].n;
				s[p].w = b[r].w;
				s[p].s = b[r].s;
				p++, r++;
			}
		}
		while(q < n){
			s[p].n = a[q].n;
			s[p].w = a[q].w;
			s[p].s = a[q].s;
			p++, q++;
		}
		while(r < n){
			s[p].n = b[r].n;
			s[p].w = b[r].w;
			s[p].s = b[r].s;
			p++, r++;
		}
		*/
	}
	
	printf("%d\n", s[q - 1].n + 1);
	
	return 0;
}
