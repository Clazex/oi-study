#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

struct route{
	int s, e, t;
}map[100020];

route map[100020]; 

int f[1002], num = 0;

void init(int m){
	for(int i = 1; i <= m; i++){
		f[i] = i;
	}
	return;
}

int trace(int index){
	if(f[index] == index){
		return index;
	}
	return f[index] = trace(f[index]);
}

bool mergeAggregate(int a, int b){
	int x = trace(a), y = trace(b);
	
	if(x != y){
		f[x] = y;
		num++;
		return false;
	}
	
	return true;
}

bool cmpRoute(route a, route b){
	return a.t < b.t;
}

int main(){
	int n, m, time = -1;
	scanf("%d %d", &n, &m);
	
	init(n);
	
	for(int i = 0; i < m; i++){
		scanf("%d %d %d", &map[i].s, &map[i].e, &map[i].t);
	}
	
	sort(map, map + m, cmpRoute);
	
	//printf("\n");
	for(int i = 0; i < m; i++){
		//printf("%d %d %d\n", map[i].s, map[i].e, map[i].t);
		if(!mergeAggregate(map[i].s, map[i].e)){
			time = map[i].t;
		}
	}
	
	printf("%d\n", num >= n - 1 ? time : -1);
	
	return 0;
}
