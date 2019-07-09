#include <iostream>
using namespace std;

int main(){
    int n, i, max = 1, sum = 1;
    cin >> n;
    int a[n+1];
    
    for(i = 0; i < n; i++){
    	cin >> a[i];
    }
    
    if(n==1){
    	cout << 1 << endl;
	}
    else{
    	for(i = 1; i < n; i++){
    		if(a[i] == a[i-1]){
    			sum++;
    			if(sum > max)
    				max=sum;
			}
			else
				sum=1;
		}
		
    	cout << max << endl;
    }
    return 0;
}
