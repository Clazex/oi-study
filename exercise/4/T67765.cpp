#include <iostream>
using namespace std;

int main(){
    int min=2147483647, max=0, n[20];
    
    for(int i=0;i<20;i++){
    	cin >> n[i];
    	if(n[i]>max)
    		max=n[i];
    	if(n[i]<min)
    		min=n[i];
    }
    
    cout << max << " " << min << endl;
    return 0;
}
