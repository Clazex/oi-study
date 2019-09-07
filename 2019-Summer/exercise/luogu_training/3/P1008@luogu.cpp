#include <cstdio>
using namespace std;

int main(){
	int i, j, k, a[208], index = 0;
	
	for(i = 1; i < 4; i++){
		for(j = 1; j < 10; j++){
			if(j == i) continue;
			for(k = 1; k < 10; k++){
				if(k == i || k == j) continue;
				
				int l, flag = 1, record[10] = {1}, x = 200 * i + 20 * j + 2 * k, y = x * 3 / 2;
				record[i] = 1, record[j] = 1, record[k] = 1;
				
				for(; x != 0; x /= 10){
						l = x % 10;
						if(record[l]) flag = 0;
						else record[l] = 1;
					}
				
				for(; y != 0; y /= 10){
					l = y % 10;
					if(record[l]) flag = 0;
					else record[l] = 1;
				}
				
				if(flag){
					a[index] = 100 * i + 10 * j + k;
					index++;
				}
			}
		}
	}
	
	for(int i = 0; i < index; i++){
		printf("%d %d %d\n", a[i], 2 * a[i], 3 * a[i]);
	}
	
    return 0;
}
