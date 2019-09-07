#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int n, i, j, sum, buff, candy[101], m = 0;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &candy[i]);
	}
	
	/*
	0 红色：5。
	1 黄色：太难吃了，小明不吃。
	2 蓝色：10，太喜欢了，要吃的下一颗糖的喜爱值+1。
	3 绿色：7。
	4 紫色：1，不太喜欢，要吃的下一颗糖喜爱值-2。
	*/
	
	for(i = 0; i < n; i++){
		sum = 0, buff = 0;
		for(j = i; j < n; j++){
			if(candy[j] == 0){
				sum += 5 + buff;
				buff = 0;
			}
			else if(candy[j] == 2){
				sum += 10 + buff;
				buff = 1;
				}
			else if(candy[j] == 3){
				sum += 7 + buff;
				buff = 0;
			}
			else if(candy[j] == 4){
				sum += 1 + buff;
				buff = -2;
			}
			m = max(m, sum);
		}
	}
	
	printf("%d", m);
	
	return 0;
}
