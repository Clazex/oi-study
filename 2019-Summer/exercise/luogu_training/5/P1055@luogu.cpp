#include <cstdio>
using namespace std;

int main(){
	char str[14], id;
	scanf("%s", str);
	
	int sum = 0, j = 1;
	
	//-48
	for(int i = 0; i < 11; i++){
		if(str[i] == '-') continue;
		sum += (str[i] - 48) * j;
		j++;
	}
	
	sum %= 11;
	id = sum + 48;
	if(id == 58) id = 'X';
	
	if(id == str[12]){
		printf("Right");
	}
	else{
		for(int i = 0; i < 12; i++){
			printf("%c", str[i]);
		}
		printf("%c", id);
	}
	
    return 0;
}
