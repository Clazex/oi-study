#include <iostream>
using namespace std;

int main(){
	int n, m, i, sum=0;
	cin >> n;
	int array[n];
	
	for(i=0;i<n;i++){
		cin >> array[i];
	}
	
	cin >> m;
	
	for(i=0;i<n;i++){
		if(array[i]==m)
			sum++;
	}
	
	cout << sum << endl;
	return 0;
}
