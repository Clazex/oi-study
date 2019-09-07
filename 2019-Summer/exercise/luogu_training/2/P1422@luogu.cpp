#include <cstdio>
using namespace std;

int main(){
	int e;
	double m;
	
	scanf("%d", &e);
	
	if(e <= 150){
		m = 0.4463 * e;
	}
	else if(e <= 400){
		m = 0.4663 * e - 3;
	}
	else{
		m = 0.5663 * e - 43;
	}
	
	printf("%.1lf", m);
	
	return 0;
}
