#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	char str[1001];
	int i, sum = 1;
	
	cin.getline(str, 1001);
	
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == ' '){
			sum++;
		}
	}
	
	printf("%d", sum);
	
	return 0;
}
