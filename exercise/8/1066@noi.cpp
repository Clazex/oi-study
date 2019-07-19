#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int n, p[10001] = {-1, -1, 1, 1, -1, 1, -1, 1, -1, -1, -1, 1, -1, 1, -1, -1, -1, 1, -1, 1, -1, -1, -1, 1, -1, -1, -1, -1, -1, 1, -1, 1, -1, -1, -1, -1, -1, 1, -1, -1, -1, 1, -1, 1, -1, -1, -1, 1, -1, -1, -1};
	scanf("%d", &n);
	if(n < 6){
		printf("empty\n");
		return 0;
	}
	for(int i = 5; i <= n; i += 2){
		if(p[i] == 0){
			p[i] = 1;
			if(i % 2 == 0){
				p[i] = -1;
			}
			for(int j = 3; p[i] == 1 && j * j <= i; j += 2){
				if(p[j] == 1 && i % j == 0){
					p[i] = -1;
					break;
				}
			}
		}
		if(p[i] == 1 && p[i - 2] == 1){
			printf("%d %d\n", i - 2, i);
		}
	}
	return 0 ;
}
