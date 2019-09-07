#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int n, i, avr = 0, s = 0, req = 0;
	scanf("%d", &n);
	int a[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
		avr += a[i];
	}
	
	avr /= n;
	
	for(i = 0; i < n; i++){
		a[i] += req;
		if(a[i] != avr) s++;
		req = a[i] - avr;
		a[i] = avr;
	}
	
	printf("%d\n", s);
	
	return 0;
}
