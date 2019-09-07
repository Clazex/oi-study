#include <cstdio>
using namespace std;

int factorial(int n){
	int product = 1;
	for(int i = 1; i <= n; i++){
		product *= i;
	}
	return product;
}

int main(){
	int n, sum = 0;
	
	scanf("%d" ,&n);
	
	for(int i = 1; i <= n; i++){
		sum += factorial(i);
	}
	
	printf("%d\n", sum);
	
	return 0;
}
