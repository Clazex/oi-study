#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int m, n, a[101][101] = {0}, b[101][101] = {0};
bool p = true;//true -> next step is A to B, false -> next step is B to A

int ArotA(){
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			b[j][m - i + 1] = a[i][j];
		}
	}
	swap(m, n);
	return 0;
}

int ArotB(){
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			b[n - j + 1][i] = a[i][j];
		}
	}
    swap(m, n);
	return 0;
}

int ArotC(){
	for(int i = 1; i <= m; i++){
		for(int j = 1;j <= n; j++){
			b[i][n - j + 1] = a[i][j];
		}
	}
	return 0;
}

int ArotD(){
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			b[m - i + 1][j] = a[i][j];
		}
	}
	return 0;
}

int BrotA(){
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			a[j][m - i + 1] = b[i][j];
		}
	}
	swap(m, n);
	return 0;
}

int BrotB(){
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			a[n - j + 1][i] = b[i][j];
		}
	}
    swap(m, n);
	return 0;
}

int BrotC(){
	for(int i = 1; i <= m; i++){
		for(int j = 1;j <= n; j++){
			a[i][n - j + 1] = b[i][j];
		}
	}
	return 0;
}

int BrotD(){
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			a[m - i + 1][j] = b[i][j];
		}
	}
	return 0;
}

int rot(char d){
	if(p){
		if(d == 'A') ArotA();
		else if(d == 'B') ArotB();
		else if(d == 'C') ArotC();
		else if(d == 'D') ArotD();
	}
	else{
		if(d == 'A') BrotA();
		else if(d == 'B') BrotB();
		else if(d == 'C') BrotC();
		else if(d == 'D') BrotD();
	}
	p = !p;
	return 0;
}

int main(){
	int i, j;
	char s[101];
	
	scanf("%d %d", &m, &n);
	
	for(i = 1; i <= m; i++){
		for(j = 1; j <= n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	scanf("%s", s);
	
	for(i = 0; i < strlen(s); i++){
		rot(s[i]);
	}
	
	if(p){
		for(i = 1; i <= m; i++){
			for(j = 1; j <= n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	else{
		for(i = 1; i <= m; i++){
			for(j = 1; j <= n; j++){
				printf("%d ", b[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
