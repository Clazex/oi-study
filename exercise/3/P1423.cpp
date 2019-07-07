#include <iostream>
using namespace std;

int main(){
	int n=1;
	double k, sum=0, step=2;
	cin >> k;

	for(;sum<k;n++){
		sum += step;
		step *= 0.98;
	}

	cout << n-1 << endl;
    return 0;
}
