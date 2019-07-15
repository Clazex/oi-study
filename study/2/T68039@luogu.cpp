#include <iostream>
using namespace std;

int main(){
    int a, b, i, max, n=0;
    cin >> a >> b;
    
    if(a<=b){
    	i=a;
    	max=b;
	}
	else{
		i=b;
		max=a;
	}
	
    while(i<=max){
    	if(i%2==1 && i%3==1 && i%5==1)
    		n+=1;
    	i++;
	}
	
	cout << n << endl;
    return 0;
}
