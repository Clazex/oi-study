#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

struct person{
	char name[10];
};

int main(){
	int n, i, d, c = 0;
	
	scanf("%d", &n);
	
	person t[n];
	
	int l = n - 1, r = 1;
	
	scanf("%d %s", &d, &t[0].name);
	
	for(i = 1; i < n; i++){
		scanf("%d", &d);
		
		if(d){
			scanf("%s", &t[r].name);
			r++;
		}
		else{
			scanf("%s", &t[l].name);
			l--;
		}
	}
	
	for(i = l + 1; c != n; i++, c++){
		if(i == n) i = 0;
		printf("%s\n", t[i].name);
	}
	
	return 0;
}
