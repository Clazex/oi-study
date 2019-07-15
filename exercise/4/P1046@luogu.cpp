#include <iostream>
using namespace std;

int main(){
	int a[10], n, i, sum = 0;
	for(i = 0; i < 10; i++){
		cin >> a[i];
	}
	cin >> n;
	
	for(i = 0; i < 10; i++){
		if(n + 30 >= a[i]){
			sum++;
		}
	}
	
	cout << sum;
    return 0;
}
