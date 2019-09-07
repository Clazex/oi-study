#include <iostream>
using namespace std;

int main(){
	int i = 2, sum = 0, n;
	cin >> n;
	while(i<=n){
		sum += i;
		i += 2;
	}
	cout << sum << endl;
	return 0;
}
