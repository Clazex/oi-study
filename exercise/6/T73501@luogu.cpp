#include <cstdio>
using namespace std;

int main(){
	char ch;
	
	scanf("%c", &ch);
	
	if(ch < 94){
		ch += 32;
	}
	else {
		ch -= 32;
	}
	
	printf("%c", ch);
	
	return 0;
}
