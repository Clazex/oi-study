#include <iostream>
using namespace std;

int main(){
    int n, m, pro=1;
    cin >> n;
    
    for(int i=0;i<n;i++){
    	cin >> m;
    	if(m%2!=0)
    		pro*=m;
	}
    
    cout << pro << endl;
    return 0;
}
