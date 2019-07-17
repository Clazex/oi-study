#include <cstdio>
using namespace std;

int main(){
	int n, sum = 1, max = 1;
	scanf("%d", &n);
	int a[n + 1];
	
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i = 1; i < n; i++){
		if(a[i] > a[i - 1]){
			sum++;
		}
		else sum = 1;
		
		if(sum > max){
			max = sum;
		}
	}
	
	printf("%d", max);
	
    return 0;
}
