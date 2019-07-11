#include <iostream>
using namespace std;

int main(){
    int n, m, max = 0, index = 0;
    cin >> n;
    int i[n];
    
    for(m = 0; m < n; m++){
    	cin >> i[m];
    	if(i[m] > max){
    		max = i[m];
    		index = m;
		}
	}
	
	cout << max << " ";
	
	for(m = 1; m < n; m++){
		if(m == index){
			cout << i[0] << " ";
		}
		else{
			cout << i[m] << " ";
		}
		if(m % 10 == 9){
			cout << endl;
		}
	}
    
    return 0;
}
