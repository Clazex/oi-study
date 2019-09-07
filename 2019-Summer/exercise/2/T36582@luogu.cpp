#include <iostream>
using namespace std;

int main(){
	string s;
	int i;
	cin >> i;
	if(90<=i && i<=100)
		s="A";
	else if(80<=i && i<=89)
		s="B";
	else if(70<=i && i<=79)
		s="C";
	else if(60<=i && i<=69)
		s="D";
	else if(0<=i && i<=59)
		s="E";
	else
		s="Score is error!";
	cout << s << endl;
	return 0;
}
