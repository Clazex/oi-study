#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int m;

double f(double x, int n){
	if(n <= 0) return x;
	x = sqrt(m - n + x);
	return f(x, n - 1);
}

int main(){
	double x;
	int n;
	scanf("%lf %d", &x, &n);
	m = n + 1;
	printf("%.2lf", f(x, n));
	return 0;
}
