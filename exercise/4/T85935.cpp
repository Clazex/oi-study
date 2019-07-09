#include <iostream>
using namespace std;

int main(){
    int n, m, i, j, index = 0;
    cin >> n >> m;
    int lamp[n], lampOff[n+1];
    
    for(i = 0; i < n; i++){
    	lamp[i] = 1;
    }
    
	for(i = 1; i <= m; i++){
		for(j = 1; i * j <= n; j++){
			if(lamp[i * j]){
				lamp[i * j] = 0;
			}
			else{
				lamp[i * j] = 1;
			}
		}
	}
	
	for(i = 0; i <= n; i++){
		if(!lamp[i]){
			lampOff[index] = i;
			index++;
		}
	}
	
	cout << lampOff[0];
	
	for(i = 1; i < index; i++){
		cout << "," << lampOff[i];
	}
	
    return 0;
}
