#include <cstdio>
using namespace std;

int main(){
	int n, k;
	double sum = 0;
	
	scanf("%d", &k);
	
	for(n = 1; sum <= k; n++){
		sum += 1.0/n;
	}
	
	printf("%d", n - 1);
	
    return 0;
}
