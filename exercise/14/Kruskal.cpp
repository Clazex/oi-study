#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

struct route{
	int s, e, l;
}map[500001];

int f[1001];

void init(int m){
	for(int i = 1; i <= m; i++){
		f[i] = i;
	}
	return;
}

int findLeader(int index){
	if(f[index] != index){
		return f[index] = findLeader(f[index]);
	}
	return index;
}

bool mergeAggregate(int a, int b){
	int x = findLeader(a);
	int y = findLeader(b);
	
	if(x != y){
		f[x] = y;
		return false;
	}
	
	return true;
}

bool cmpRoute(route a, route b){
	return a.l < b.l;
}

int main(){
	int m, n;
	int cnt = 0, len = 0;
	
	scanf("%d %d", &m, &n);
	
	init(m);
	
	for(int i = 0; i < n; i++){
		scanf("%d %d %d", &map[i].s, &map[i].e, &map[i].l);
	}
	
	sort(map, map + n, cmpRoute);
	
	//printf("\n");
	for(int i = 0; cnt < m - 1; i++){
		//printf("%d %d %d\n", map[i].s, map[i].e, map[i].l);
		if(!mergeAggregate(map[i].s, map[i].e)){
			len += map[i].l;
			cnt++;
		}
	}
	
	printf("%d\n", len);
	
	return 0;
}
