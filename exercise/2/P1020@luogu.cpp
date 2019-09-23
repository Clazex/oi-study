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

#define MAXN (100002)

//int dp[MAXN][3] = {0};
vector<int> sequence;
int dp1[MAXN] = {0}, dp2[MAXN] = {0};

int main(){
	int t;
	while(scanf(" %d", &t) != EOF){
		sequence.push_back(t);
	}
	
	for(int i = sequence.size() - 1; i >= 0; i--){
        int maxNum = 0;
        for(uns int j = i + 1; j < sequence.size(); j++){
            if(sequence[j] <= sequence[i]){
            	maxNum = max(maxNum, dp1[j]);
			}
        }
        
        dp1[i] = maxNum + 1; 
    }
	
	for(uns int i = 0; i < sequence.size(); i++){
		int maxNum = 0;
		for(uns int j = 0; j < i; j++){
			if(sequence[j] < sequence[i]){
				maxNum = max(maxNum, dp2[j]);
			}
		}
		
		dp2[i] = maxNum + 1;
	}
	
	printf("%d\n", *max_element(dp1, dp1 + sequence.size()));
	printf("%d\n", *max_element(dp2, dp2 + sequence.size()));
	
	return 0;
}

