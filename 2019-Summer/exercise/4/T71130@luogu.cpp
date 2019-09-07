#include <iostream>
using namespace std;

int main(){
	int n, i;
	cin >> n;
	int array[n];
	
	for(i=0;i<n;i++){
		cin >> array[i];
	}
	
	for(i=n;i>0;i--){
		cout << array[i-1] << " ";
	}
	
	return 0;
}
