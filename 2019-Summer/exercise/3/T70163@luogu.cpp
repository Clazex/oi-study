#include <iostream>
using namespace std;

int main(){
    int n, j=0;
    cin >> n;
    
    for(int i=0;i<n;i++){
    	
    	while(j<2*i+1){
    		cout << "*";
    		j++;
		}
    	
    	j=0;
		cout << endl;
	}
    
    return 0;
}