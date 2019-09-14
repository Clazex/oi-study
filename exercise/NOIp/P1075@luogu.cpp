#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
#define ll long long
#define uns unsigned
#define reg register

#define INF (0x3f3f3f3f)

int main(){
	int n;
	
	scanf(" %d", &n);
	
	for(reg int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
			printf("%d", n / i);
			break;
		}
	}
	
	return 0;
}

