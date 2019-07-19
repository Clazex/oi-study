#include <cstdio>
#include <cmath>
using namespace std;

int isPrime(int n){
	if(n == 1){
		printf("no\n");
		return 0;
	}
	if(n == 2){
		printf("yes\n");
		return 0;
	}
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			printf("no\n");
			return 0;
		}
	}
	printf("yes\n");
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		isPrime(a[i]);
	}
}
