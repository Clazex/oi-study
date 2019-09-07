#include <cstdio>
using namespace std;

int main(){
	int n, a[101], b[101] = {0}, sum = 0;
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j == i){
				continue;
			}
			for(int k = 0; k < n; k++){
				if(k == j || k == i){
					continue;
				}
				if(a[k] + a[j] == a[i]){
					b[i] = 1;
				}
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		if(b[i]) sum++;
	}
	
	printf("%d", sum);
	
    return 0;
}
