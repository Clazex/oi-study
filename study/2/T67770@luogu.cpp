#include <iostream>
using namespace std;

int main(){
    int a1, a2, i, n;
    cin >> a1 >> a2;
    
    if(a1>=a2)
    	i=a2;
    else
    	i=a1;
    
    for(n=0;i>0;i--){
    	if (a1%i==0 && a2%i==0){
    		cout << a1*a2/i << endl;
    		break;
		}
	}
	
    return 0;
}
