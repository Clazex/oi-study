#include <cstdio>
using namespace std;

int main(){
	char str[102];
	
	scanf("%s", str);
	
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] > 94){
			str[i] -= 32;
		}
	}
	
	printf("%s", str);
	
	return 0;
}
