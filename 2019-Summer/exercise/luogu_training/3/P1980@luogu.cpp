#include <cstdio>
using namespace std;

int main(){
	int n, m, x, sum = 0;
	scanf("%d %d", &n, &x);
	
	for(int i = 1; i <= n;  i++){
		m = i;
		while(m != 0){
			if(m % 10 == x)
				sum++;
			m /= 10;
		}
	}
	
	printf("%d", sum);
	
    return 0;
}
