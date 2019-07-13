#include <cstdio>
using namespace std;

int main(){
	char str1[105], str2[105];
	int i;
	
	scanf("%s", str1);
	
	for(i = 0; str1[i] != '\0';i++){
		str2[i] = str1[i];
	}
	
	str2[i] = '\0';
	
	printf("%s", str2);
	
	return 0;
}
