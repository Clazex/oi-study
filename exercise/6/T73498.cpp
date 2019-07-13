#include <cstdio>
using namespace std;

int main(){
	char ch;
	int upper = 0, lower= 0;
	
	for(int i = 0;; i++){
		scanf("%c", &ch);
		if(ch == '$'){
			break;
		}
		if(ch < 94){
			upper++;
		}
		else {
			lower++;
		}
	}
	
	printf("%d %d", upper, lower);
	
	return 0;
}
