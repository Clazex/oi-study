#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int n, m, c = 0;
	scanf("%d", &n);
	m = sqrt(n);
	for(int i = 1; i <= m; i++)
		if(n % i == 0)
			c++;
	if(m * m == n)
		c--;
	printf("%d", c);
	return 0;
}
