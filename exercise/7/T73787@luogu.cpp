#include <iostream>
using namespace std;

int main(){
	char str[1002];
	int sum = 0;
	
	while(cin >> str){
		sum++;//每输入一个词就执行一次 
	}
	
	cout << sum;
	
	return 0;
} 
