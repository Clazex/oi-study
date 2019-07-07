#include <iostream>
using namespace std;

int main(){
	int m, n, step=0;
	cin >> m >> n;
	
	for(int i=0;i<n;i++,m++){
		if(m==6 || m==7)
			continue;
		else if(m==8)
			m=1; 
		step++;
	}
	
	cout << 250*step << endl;
    return 0;
}
