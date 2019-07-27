#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

int n;

struct person{
	int f;
	char j[10];
};

int findNext(int index, bool isFacingOut, bool direction, int count){
	for(int d = (isFacingOut * 2 - 1) * (direction * 2 - 1) * -1/*获取方向逆时针为正*/; count > 0; count--/*计数*/){
		index += d;//一步操作 
		if(index < 0) index = n - 1;//过左限跳到右限
		else if(index >= n) index = 0;//过右限跳到左限
	}
	return index;
}

int main(){
	int i, m, ai, si, index = 0;
	scanf("%d %d", &n, &m);
	
	person p[n];
	
	for(i = 0; i < n; i++){
		scanf("%d %s", &p[i].f, p[i].j);
	}
	
	for(i = 0; i < m; i++){
		scanf("%d %d", &ai, &si);
		index = findNext(index, p[index].f, ai, si);
	}
	
	printf("%s\n", p[index].j);
	
	return 0;
}
