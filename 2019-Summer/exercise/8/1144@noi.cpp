#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int i, n, sum = 1, max = 1, index;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
    if(n == 1){
    	printf("%d", a[0]);
    	return 0;
	}
	sort(a, a + n);
	for(i = 1; i < n; i++){
    	if(a[i] == a[i - 1]){
    		sum++;
    		if(sum > max){
    			max = sum;
    			index = a[i];
			}
		}
		else
			sum = 1;
	}
   	printf("%d", index);
	return 0 ;
}
