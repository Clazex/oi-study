#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

char table[123] = {0}, c[27], d[10];

int clear(){
	for(int i = 97; i < 123; i++){
		table[i] = 0;
	}
	return 0;
}

int read(int data){
	for(int i = 0; i < strlen(c); i++){
		table[c[i]] = data;
	}
	return 0;
}

int write(int crit){
	int index = 0;
	for(int i = 97; i < 123; i++){
		if(table[i] >= crit){
			c[index] = i;
			index++;
		}
	}
	c[index] = '\0';
	return 0;
}

int main(){
	
	/*
	+ 并集 
	* 交集 
	- 补集 
	*/
	
	char t;
	int m, ki, i, j;
	scanf("%d", &m);
	
	for(i = 0; i < m; i++){
		scanf("%d %s", &ki, c);
		
		read(1);
		write(1);
		
		for(j = 1; j < ki; j++){
			scanf(" %c %s", &t, d);
			
			if(t == '+'){
				read(1);
				for(int i = 0; i < strlen(d); i++){
					table[d[i]] = 1;
				}
				write(1);
			}
			else if(t == '*'){
				read(-1);
				for(int i = 0; i < strlen(d); i++){
					table[d[i]] *= table[d[i]];
				}
				write(1);
			}
			else{
				read(1);
				for(int i = 0; i < strlen(d); i++){
					table[d[i]] -= 1;
				}
				write(1);
			}
			
			clear();
		}
		
		printf("%s\n", c);
	}
	
	return 0;
}
