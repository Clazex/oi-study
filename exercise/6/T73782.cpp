#include <cstdio>
using namespace std;

int main(){
	char str[102];
	int u = 0, l = 0;
	
	scanf("%s", str);
	
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] < 94){
			u++;
		}
		else{
			l++;
		}
	}
	
	printf("%d %d", u, l);
	
	return 0;
}
