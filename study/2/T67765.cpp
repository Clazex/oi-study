#include <iostream>
using namespace std;

int main(){
    int min=2147483647, max=0, n;
    
    for(int i=0;i<20;i++){
    	cin >> n;
    	if(n>max)
    		max=n;
    	if(n<min)
    		min=n;
    }
    
    cout << max << " " << min << endl;
    return 0;
}
