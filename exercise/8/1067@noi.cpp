#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	int i, j, k, l, m, n, r, s, a[100][100], b[100][100], sum = 0, min = 1000001, x, y;
	scanf("%d %d", &m, &n);
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	scanf("%d %d", &r, &s);
	for(i = 0; i < r; i++)
		for(j = 0; j < s; j++)
			scanf("%d", &b[i][j]);
	
	for(i = 0; i <= m - r; i++){
		for(j = 0; j <= n - s; j++){
			sum = 0;
			for(k = 0; k < r; k++)
                for(l = 0; l < s; l++)
                    sum += abs(a[i + k][j + l] - b[k][l]);
            if(sum < min) {
                x = i, y = j, min = sum;
            }
		}
	}
	
	for(i = 0; i < r; i++){
		for(j = 0; j < s; j++){
			printf("%d ", a[i + x][j + y]);
		}
		printf("\n");
	}
	
	return 0;
}
