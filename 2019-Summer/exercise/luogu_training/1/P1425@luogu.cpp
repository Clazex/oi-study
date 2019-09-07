#include <cstdio>
using namespace std;

int main(){
	int a, b, c, d, t;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	t = 60*c+d-60*a-b;
	printf("%d %d", t/60, t%60);
	return 0;
}
