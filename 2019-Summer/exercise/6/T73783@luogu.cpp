#include <cstdio>
using namespace std;

int main(){
	char str[102];
	
	scanf("%s", str);
	
	for(int i = 0; str[i] != '\0'; i++){
		str[i] -= 32;
	}
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] < 62){
			str[i] += 64;
		}
	}
	
	printf("%s", str);
	
	return 0;
}
