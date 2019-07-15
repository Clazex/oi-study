#include <iostream>
using namespace std;

int main(){
	int i = 1, pro = 1, n;
	cin >> n;
	while(i<=n){
		pro *= i;
		i++;
	}
	cout << pro << endl;
	return 0;
}
