#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, m;
	cin >> n;
	int i[n];
	
	for(m = 0; m < n; m++){
		cin >> i[m];
	}
	
	for(m = 1; m < n; m++){
		cout << i[m] << " ";
	}
	
	cout << i[0] << endl;
	
    return 0;
}
