#include <cstdio>
using namespace std;

int main(){
	int n, j, arr[102], min = 2147483647, index = 0;
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(arr[j] < min){
				min = arr[j];
				index = j;
			}
		}
		if(arr[i] > min){
			arr[101] = arr[index], arr[index] = arr[i], arr[i] = arr[101];
		}
		min = 2147483647, index = 0;
	}
	
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
