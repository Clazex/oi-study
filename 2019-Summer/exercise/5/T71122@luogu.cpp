#include <iostream>
using namespace std;

int main(){
    int n, x, m, index, operation = 1;
    cin >> n;
    int a[n+1];
    
    for(m = 0; m < n; m++){
    	cin >> a[m];
	}
	
	cin >> x;
	
	//Decide which operation to do
	for(m = 0; m < n; m++){
		if(a[m] == x){
			operation--;
			index = m;
			break;
		}
	}
	
	if(operation){//Add
		for(m = 0; m < n; m++){
			if(a[m] > x){
				index = m;
				break;
			}
		}
		
		if(m >= n){
			index = n;
		}
		
		for(m = n; m > index; m--){
			a[m] = a[m - 1];
		}
		
		a[index] = x;
		
		for(m = 0; m <= n; m++){
			cout << a[m] << " ";
		}
	}
	else{//Remove
		for(m = index; m < n - 1; m++){
			a[m] = a[m + 1];
		}
		
		for(m = 0; m < n - 1; m++){
			cout << a[m] << " ";
		}
	}
	
    return 0;
}
