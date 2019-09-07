#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	char a[7], b[7];
	int c = 1, d = 1;
	scanf("%s", a);
	scanf("%s", b);
	
	for(int i = 0; i < strlen(a); i++){
		c *= (a[i] - 'A' + 1);
	}
	for(int i = 0; i < strlen(b); i++){
		d *= (b[i] - 'A' + 1);
	}
	
	c %= 47, d %= 47;
	
	if(c == d){
		printf("GO");
	}
	else{
		printf("STAY");
	}
	
    return 0;
}
