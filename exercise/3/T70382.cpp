#include <iostream>
using namespace std;

int main(){
    int n, j=0, k;
    cin >> n;
    
    for(int i=0;i<n;i++){
    	
    	k=n-i-1;
    	while(k>0){
    		cout << " ";
    		k--;
		}
    	
    	while(j<2*i+1){
    		cout << "*";
    		j+=1;
		}
    	
    	j=0;
    	
		cout << endl;
	}
    
    for(int i=n-2;i>=0;i--){
    	
    	k=n-i-1;
    	while(k>0){
    		cout << " ";
    		k--;
		}
    	
    	while(j<2*i+1){
    		cout << "*";
    		j+=1;
		}
    	
    	j=0;
    	
		cout << endl;
	}
    
    return 0;
}