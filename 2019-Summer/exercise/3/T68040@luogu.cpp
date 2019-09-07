#include <iostream>
using namespace std;

int main(){
	int n, k, sum=0;
	cin >> n >> k;
	
	if(n%19==0){
		while(n!=0){
			if(n%10==3)
				sum++;
			n/=10;
		}
		if(sum==k)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	else
		cout << "NO" << endl;
	
    return 0;
}