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

#define MAXN (1002)

class i_bool{
	public:
		i_bool (int value_false = 0, int value_true = 1, bool value = false){
			this->value_false = value_false, this->value_true = value_true, this->value = value;
			return;
		}
		
		void invert(){
			value = 1 - value;
			return;
		}
		
		int getValue(){
			return value ? value_true : value_false;
		}
		
		int getValueInverted(){
			return value ? value_false : value_true;
		}
	
	private:
		int value_false, value_true;
		bool value;
};

int dp[MAXN][3] = {0};
char a[MAXN], b[MAXN];
i_bool flag(1, 2);

int main(){
	scanf(" %s %s", a + 1, b + 1);
	
	int i, j;
	for(i = 1; i <= strlen(b + 1); i++){
		for(j = 1; j <= strlen(a + 1); j++){
			if(a[j] != b[i]){
				dp[i][flag.getValue()] = max(dp[i - 1][flag.getValue()], dp[i][flag.getValueInverted()]);
			} else { 
				dp[i][flag.getValue()] = dp[i - 1][flag.getValueInverted()] + 1;
			}
			flag.invert();
		}
	}
	
	printf("%d\n", dp[i - 1][flag.getValueInverted()]);
	
	return 0;
}

