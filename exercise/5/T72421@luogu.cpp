#include <iostream>
using namespace std;

int main(){
    int n, m, i;
    cin >> n >> m;
    int a[n];
    
    for(i = 0; i < n; i++){
    	cin >> a[i];
	}
	
	for(i = 0; i < n; i++){
		if(i == m){
			continue;
		}
		cout << a[i] << " ";
	}
	
    return 0;
}
