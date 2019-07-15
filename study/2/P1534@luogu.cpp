#include <iostream>
using namespace std;

int main(){
    int n, i1, i2, today=0, total=0;
    cin >> n;
    
    for(int i=0;i<n;i++){
    	cin >> i1 >> i2;
    	today+=i1+i2-8;
    	total+=today;
	}
    
    cout << total << endl;
    return 0;
}
