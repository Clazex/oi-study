#include <cstdio>
using namespace std;

int main(){
	int n = 1;
	double k, sum = 0, step = 2;
	
	scanf("%lf", &k);

	for(; sum < k; n++){
		sum += step;
		step *= 0.98;
	}

	printf("%d", n - 1);
    return 0;
}
