#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	
	int i, m, p1, s1, p2, s2, min, relx, rel = 0, s[n + 1];
	
	for(i = 1; i <= n; i++){
		scanf("%d", &s[i]);//ʿ����λ 
	}
	
	scanf("%d %d %d %d", &m, &p1, &s1, &s2);
	s[p1] += s1;//�콵��� 
	
	for(i = 1; i <= n; i++){
		rel += s[i] * (m - i);//�������ʿ��������Ϊ������
	}
	
	min = abs(rel) + 1;//��Сֵ��ʼ��Ϊ������1
	
	if(rel == 0){
		p2 = m;//��Լ��������ƽ�������
	}
	else{
		for(i = 1; i <= n; i++){
			relx = abs(rel + s2 * (m - i));//�µ����ʿ��
			if(relx < min){//Ѱ����Сֵ����ͬ���滻��
				min = relx; //������Сֵ
				p2 = i;//��¼���λ��
			}
		}
	}
	
	printf("%d\n", p2);//��� 
	
	return 0;
}
