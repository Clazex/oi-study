-#include <iostream>
using namespace std;

int main(){
    int n, isPrime=1;
    cin >> n;
    
    for(int i=2;i<n;i++){
    	if(n%i==0){
    		isPrime=0;
    		break;
		}
	}
	
	if(isPrime)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	
    return 0;
}