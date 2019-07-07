#include <iostream>
using namespace std;

int main(){
	int head, foot;
	cin >> head >> foot;
	int b=(foot-2*head)/2,a=head-b;
	cout << a << " " << b << endl;
    return 0;
}