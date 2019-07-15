#include <iostream>
using namespace std;

int main(){
    int i1, i2, today, day=0, max=0;
    
    for(int i=1;i<=7;i++){
    	cin >> i1 >> i2;
    	today=i1+i2-8;
    	if(today>max){
    		day=i;
    		max=today;
		}
	}
    
    cout << day << endl;
    return 0;
}
