#include <cstdio>
using namespace std;

int main(){
	int a[10], n, i, sum = 0;
	for(i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &n);
	
	for(i = 0; i < 10; i++){
		if(n + 30 >= a[i]){
			sum++;
		}
	}
	
	printf("%d", sum);
    return 0;
}
