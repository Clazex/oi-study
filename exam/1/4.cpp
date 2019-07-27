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
		scanf("%d", &s[i]);//士兵就位 
	}
	
	scanf("%d %d %d %d", &m, &p1, &s1, &s2);
	s[p1] += s1;//天降奇兵 
	
	for(i = 1; i <= n; i++){
		rel += s[i] * (m - i);//计算相对士气（正方为龙方）
	}
	
	min = abs(rel) + 1;//最小值初始化为比最大多1
	
	if(rel == 0){
		p2 = m;//节约计算量（平衡情况）
	}
	else{
		for(i = 1; i <= n; i++){
			relx = abs(rel + s2 * (m - i));//新的相对士气
			if(relx < min){//寻找最小值（相同不替换）
				min = relx; //更新最小值
				p2 = i;//记录最佳位置
			}
		}
	}
	
	printf("%d\n", p2);//输出 
	
	return 0;
}
