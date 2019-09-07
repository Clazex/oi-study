#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

long long r(long long n){
	long long m = 0;
	while(n != 0){
		m *= 10;
		m += n % 10;
		n /= 10;
	}
	return m;
}

bool hw(long long n){
	return n == r(n);
}

int main(){
	long long n;
	int o = 0;
	scanf("%lld", &n);
	
	if(hw(n)){
		printf("0\n");
		return 0;
	}
	
	while(!hw(n)){
		n += r(n);
		o++;
	}
	
	printf("%d\n", o);
	
	return 0;
}
