#include <iostream>
using namespace std;

int main(){
	int i;
	cin >> i;
	/*
	if(i%400==0)
		cout << "yes" << endl;
	else if(i%100==0)
		cout << "no" << endl;
	else if(i%4==0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	*/	
	if((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}
