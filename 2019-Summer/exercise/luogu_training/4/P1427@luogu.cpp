#include <cstdio>
using namespace std;

int main(){
	int i, a[101];
	
	for(i = 0; ; i++){
		scanf("%d", &a[i]);
		if(a[i] == 0)
			break;
	}
	
	for(i--; i >= 0; i--){
		printf("%d ", a[i]);
	}
	
    return 0;
}
