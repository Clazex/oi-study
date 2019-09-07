#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

double f(double x, int n){
	if(n == 1) return sqrt(x + 1);
	return sqrt(n + f(x, n - 1));
}

int main(){
	double x;
	int n;
	scanf("%lf %d", &x, &n);
	printf("%.2lf", f(x, n));
	return 0;
}
