#include <cstdio>
#include <algorithm>
using namespace std;

int sg(int n){
	int m = 0;
	for(; n != 0; n /= 10){
		m += n % 10;
	}
	return m;
}

int main(){
	int n;
	scanf("%d", &n);
	while(n >= 10){
		n = sg(n);
	}
	printf("%d", n);
	return 0;
}
