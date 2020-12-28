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
	0 ��ɫ��5��
	1 ��ɫ��̫�ѳ��ˣ�С�����ԡ�
	2 ��ɫ��10��̫ϲ���ˣ�Ҫ�Ե���һ���ǵ�ϲ��ֵ+1��
	3 ��ɫ��7��
	4 ��ɫ��1����̫ϲ����Ҫ�Ե���һ����ϲ��ֵ-2��
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
