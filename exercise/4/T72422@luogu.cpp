#include <iostream>
using namespace std;

int main(){
	int n, m, i, x=0;
	cin >> n >> m;
	int array[n];
	
	for(i=0;i<n;i++){
		cin >> array[i];
	}
	
	for(i=0;i<n;i++){
		if(array[i]==m){
			x=i+1;
			break;
		}	
	}
	
	cout << x << endl;
	return 0;
}
