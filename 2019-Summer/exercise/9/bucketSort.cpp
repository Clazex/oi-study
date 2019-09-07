#include <cstdio>
using namespace std;

int main(){
	int n, m, a[1000] = {0};
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &m);
		a[m]++;
	}
	
	for(int i = 0; i < 1000; i++){
		for(int j = 0; j < a[i]; j++){
			printf("%d ", i);
		}
	}
	
	return 0;
}
