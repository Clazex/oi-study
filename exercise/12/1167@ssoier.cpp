#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

double f(double x, int n){
	if(n == 1) return x / (n + x);
	return x / (n + f(x, n - 1));
}

int main(){
	int x, n;
	scanf("%d %d", &x, &n);
	printf("%.2lf", f(x, n));
	return 0;
}
