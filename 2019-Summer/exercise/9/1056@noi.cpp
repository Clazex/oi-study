#include <cstdio>
#include <cmath>
using namespace std;

int cvtBin(int binary, int number){
	int digit, i = 0, decimal = 0;
	for(; number != 0; i++, number /= 10){
		digit = number % 10;
		if(digit >= binary){
			return -1;
		}
		decimal += digit * pow(binary, i);
	}
	return decimal;
}

int main(){
	int a, b, c, i;
	scanf("%d %d %d", &a, &b, &c);
	for(i = 2; i < 17; i++){
		if(cvtBin(i, a) * cvtBin(i, b) == cvtBin(i, c)){
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
	return 0;
}
