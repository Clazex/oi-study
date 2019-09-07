#include <iostream>
using namespace std;

int main(){
    int n, m, x, index = 0, flag = 1;
    cin >> n;
    int i[n], o[n];
    
    for(m = 0; m < n; m++){
    	cin >> i[m];
    }
    
    for(m = 0; m < n; m++){
    	for(x = 0; x < index; x++){
    		if(o[x] == i[m]){
    			flag = 0;
    			break;
			}
		}
		if(flag){
			o[index] = i[m];
			index++;
		}
		else{
			flag = 1;
		}
	}
	
	for(m = 0; m < index; m++){
		cout << o[m] << " ";
	}
	
    return 0;
}
