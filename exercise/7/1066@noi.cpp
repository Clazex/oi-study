#include <cstdio>
using namespace std;

int isPrime(int n){
	int isPrime = 1;
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}

int main(){
	int n, index = 0, a[5001];
	
	scanf("%d", &n);
	
	for(int i = 2; i < n; i++){
		if(isPrime(i)){
			a[index] = i;
			index++;
		}
	}
	
	for(int i = 0; i < index - 1; i++){
		if(a[i + 1] - a[i] == 2){
			printf("%d %d\n", a[i], a[i + 1]);
		}
	}
	
	return 0;
}
