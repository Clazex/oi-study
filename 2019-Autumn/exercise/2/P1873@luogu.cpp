#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
//#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define uns unsigned
#define reg register

#define INF (0x3f3f3f3f)

#define MAXN (1000001)
#define MAXM (2000000001)

ll n, m, left = 0, right = 0, t[MAXN];

inline ll bs(){
	while(left <= right){
		ll mid = (left + right) / 2, log = 0;
		
		for(ll i = 0; i < n; i++){
			if(t[i] > mid){
				log += t[i] - mid;
			}
		}
		
		if(log < m){
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	return left - 1;
}

int main(){
	scanf(" %lld %lld", &n, &m);
	
	ll p;
	for(ll i = 0; i < n; i++){
		scanf(" %d", &t[i]);
		right = max(right, t[i]);
	}
	
	printf("%lld\n", bs());
	
	return 0;
}

