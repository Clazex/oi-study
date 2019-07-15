#include <cstdio>
using namespace std;

int main(){
	int m, out = 0, stored = 0, left = 0;
	
	for(int i = 1; i < 13; i++){
		scanf("%d", &m);
		left += 300 - m;
		if(left < 0){
			out = -i;
			break;
		}
		else if(left >= 100){
			stored += left / 100;
			left %= 100;
		}
	}
	
	if(out == 0)
		out = stored * 120 + left;
	
	printf("%d", out);
	return 0;
}
