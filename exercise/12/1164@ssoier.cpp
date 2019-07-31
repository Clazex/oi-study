#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int digit(int x, int n){
	if(n == 1) return x % 10;
	return digit(x / 10, n - 1);
}

int main(){
	int x, n;
	scanf("%d %d", &x, &n);
	printf("%d", digit(x, n));
	return 0;
}
