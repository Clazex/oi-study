#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

long long record[21][21][21] = {0};

long long w(long long a, long long b, long long c){
	if(a <= 0 || b <= 0 || c <= 0) return 1;
	if(a > 20 || b > 20 || c > 20) return 1048576;//w(20, 20, 20) = 1048576
	if(record[a][b][c] != 0) return record[a][b][c];
	if(a < b && b < c) return record[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	return record[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
}

int main(){
	long long a, b, c;
	
	while(true){
		scanf("%lld %lld %lld", &a, &b, &c);
		if(a == -1 && b == -1 && c == -1) return 0;
		printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, w(a, b, c));
	}
}
