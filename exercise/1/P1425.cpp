#include <iostream>
using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int t = 60*c+d-60*a-b;
	cout << t/60 << " " << t%60 << endl;
	return 0;
}
