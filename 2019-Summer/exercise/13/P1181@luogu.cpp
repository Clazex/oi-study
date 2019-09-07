#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int n, m, current, sum = 0, ans = 1;
	scanf("%d %d", &n, &m);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &current);
		sum += current;
		if(sum > m){
			sum = current;
			ans++;
		}
	}
	
	printf("%d\n", ans);
	
	return 0;
}
