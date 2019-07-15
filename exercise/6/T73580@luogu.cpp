#include <cstdio>
using namespace std;

int main(){
	char str1[202], str2[102];
	int i, j;
	
	scanf("%s", str1);
	scanf("%s", str2);
	
	for(i = 0; str1[i] != '\0';i++){
	}
	
	j = i;
	
	for(; str2[i - j] != '\0';i++){
		str1[i] = str2[i - j];
	}
	
	str1[i] = '\0';
	
	printf("%s", str1);
	
	return 0;
}
