#include <iostream>
using namespace std;

int main(){
	int n, a, b, c, min=100000001;
	cin >> n;
	
	for(int i=0;i<3;i++){
		cin >> a >> b;
		c=(n+a-1)/a*b;
		if(c<min){
			min=c;
		}
	}
	
	cout << min << endl;
	return 0;
}
