#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
	string n;
	int k, i;
	
	cin >> n >> k;
	
	n = "0" + n + "0";
	int l = n.size();
	
	while(k--){
		bool flag = 1;
		for(i = 1; i < l - 1; i++){
			if(n[i] >= n[i - 1] && n[i] > n[i + 1]){
				flag = 0;
				//cout << "Delete " << n[i] << " at " << i << ", ";
				n.erase(i, 1);
				//cout << "Number is " << n << " now" << endl;
				l--;
				break;
			}
		}
	}
	
	n.erase(l - 1, 1);
	n.erase(0, 1);
	
	for(i = 0; i <= l - 2 && n[0] == '0'; i++){
		n.erase(0, 1);
		l--;
	}
	
	if(n == ""){
		cout << 0 << endl;
		return 0;
	}
	
	cout << n << endl;
	
	return 0;
}
