#include <cstdio>
#include <cmath>
using namespace std;

int powerSelf(int n){
	return pow(n, n);
}

int main(){
	int n, sum = 0;
	
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		sum += powerSelf(i);
	}
	
	printf("%d\n", sum);
	
	return 0;
}
