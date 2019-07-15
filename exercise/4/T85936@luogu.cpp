#include <iostream>
using namespace std;

int main(){
    int min=2147483647, max=0, n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    	if(a[i] > max)
    		max = a[i];
    	if(a[i] < min)
    		min = a[i];
    }
    
    cout << max-min << endl;
    return 0;
}
