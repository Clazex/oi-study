#include <iostream>
using namespace std;

int main(){
	int i, a[10];
	
	for(i=0;i<10;i++){
		cin >> a[i];
	}
	
	cout << 28*a[0]+32*a[1]+45*a[2]+78*a[3]+35*a[4]+86*a[5]+27*a[6]+43*a[7]+56*a[8]+65*a[9] << endl;
	return 0;
}
