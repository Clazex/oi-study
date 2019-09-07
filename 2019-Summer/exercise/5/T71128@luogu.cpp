#include <iostream>
using namespace std;

int main(){
    int n, i;
    cin >> n;
    int o[n] = {0, 1};
	
    for(i = 2; i < n; i++){
    	o[i] = o[i - 2] + o[i - 1];
	}
	
	for(i = 0; i < n; i++){
		cout << o[i] << " ";
		if(i % 5 == 4){
			cout << endl;
		}
	}
	
    return 0;
}
