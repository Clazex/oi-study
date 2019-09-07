#include <cstdio>
using namespace std;

int main(){
	int n, a, b, c, min = 100000001;
	scanf("%d", &n);
	
	for(int i = 0; i < 3; i++){
		scanf("%d %d", &a, &b);
		c = (n + a - 1) / a * b;
		if(c < min){
			min = c;
		}
	}
	
	printf("%d", min);
	return 0;
}
