#include <iostream>
using namespace std;

int main(){
    int n, m, max = 0;
    cin >> n;
    int i[n];
    
    for(m = 0; m < n; m++){
    	cin >> i[m];
    	if(i[m] > max){
    		max = i[m];
		}
	}
	
	for(m = 0; m < n; m++){
		if(i[m] == max){
			continue;
		}
		cout << i[m] << " ";
	}
	
	cout << endl << max << endl;
    
    return 0;
}
