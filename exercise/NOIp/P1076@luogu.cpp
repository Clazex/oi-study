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

#define MAXN (10002)
#define MAXM (101)

ll n, m, sum = 0, num[MAXN][MAXM], current, numStair[MAXN] = {0};
bool hasStair[MAXN][MAXM];

int main(){
	scanf(" %lld %lld", &n, &m);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf(" %d %lld", &hasStair[i][j], &num[i][j]);
			if(hasStair[i][j]) numStair[i]++;
		}
	}
	
	scanf(" %lld", &current);
	
	for(int i = 0; i < n; i++){
		sum += num[i][current];
		
		int ans = 0, currentNum = (num[i][current] - 1) % numStair[i] + 1;
		
        while(ans < currentNum){
            ans += hasStair[i][current];
            if (ans == currentNum) break;
            
            current++;
            if (current == m) current = 0;
        }
	}
	
	printf("%lld\n", sum % 20123);
	
	return 0;
}

