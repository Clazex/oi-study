#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

void Dec2Bin(int m){
	if(m < 2){
		printf("%d", m);
	}
	else{
		Dec2Bin(m / 2);
		printf("%d", m % 2);
	}
}

int main(){
	int m;
	
	scanf("%d", &m);
	
	Dec2Bin(m);
	
	return 0;
}
