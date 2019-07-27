#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

int r(int n){
	int m = 0;
	while(n != 0){
		m *= 10;
		m += n % 10;
		n /= 10;
	}
	return m;
}

bool hw(int n){
	return n == r(n);
}

int main(){
	int n, m, o = 0;
	scanf("%d", &n);
	
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
