#include <cstdio>
using namespace std;

int main(){
	int n, sum, a[101];
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < n; i++){
		sum = 0;
		for(int j = 0; j < i; j++){
			if(a[j] < a[i]){
				sum++;
			}
		}
		printf("%d ", sum);
	}
	
    return 0;
}
