#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

int n;

struct person{
	int f;
	char j[10];
};

int main(){
	int i, m, ai, si, index = 0;
	scanf("%d %d", &n, &m);
	
	person p[n];
	
	for(i = 0; i < n; i++){
		scanf("%d %s", &p[i].f, p[i].j);
	}
	
	for(i = 0; i < m; i++){
		scanf("%d %d", &ai, &si);
		index = ((index + (p[index].f * 2 - 1) * (ai * 2 - 1) * -1 * si) % n + n) % n;
	}
	
	printf("%s\n", p[index].j);
	
	return 0;
}
