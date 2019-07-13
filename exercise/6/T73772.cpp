#include <cstdio>
using namespace std;

int main(){
	char str1[102], str2[102];
	int i, flag = 0;
	
	scanf("%s %s", str1, str2);
	
	for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++){
		if(str1[i] < str2[i]){
			flag = -1;
			break;
		}
		else if(str1[i] > str2[i]){
			flag = 1;
			break;
		}
	}
	
	if(str1[i] == '\0' || str2[i] == '\0'){
		int l1, l2;
		
		for(l1 = 0; str1[l1] != '\0'; l1++){
		}
		for(l2 = 0; str2[l2] != '\0'; l2++){
		}
		
		if(l1 < l2){
			flag = -1;
		}
		else if(l1 > l2){
			flag = 1;
		}
	}
	
	printf("%d", flag);
	
	return 0;
}
