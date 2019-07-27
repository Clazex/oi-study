#include <cstdio>
using namespace std;

int main(){
	char c;
	int n = 0;
	
	while(true){
		scanf("%c", &c);
		if(c == '\n') break;
		if(c != ' ') n++;
	}
	
	printf("%d\n", n);
	
	return 0;
}
