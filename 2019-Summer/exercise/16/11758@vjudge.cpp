#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <vector>
using namespace std;
#define ll long long
#define uns unsigned
#define reg register

#define INF (0x3f3f3f3f)

#define MAXN (1005)

struct route{
	int s, e, l;
};

route map[MAXN * MAXN];
int f[MAXN];

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
		return true;
	}
	
	return false;
}

bool cmpRoute(route a, route b){
	return a.l > b.l;
}

int main(){
	int cnt, n, m, k;
	
	scanf("%d", &cnt);
	k = cnt;
	
	while(cnt--){
		scanf("%d %d", &n, &m);
		
		init(n);
		
		for(int i = 0; i < m; i++){
			scanf("%d %d %d", &map[i].s, &map[i].e, &map[i].l);
		}
		
		sort(map, map + m, cmpRoute);
		
		int maxWeight;
		for(int i = 0; i < m; i++){
			if(mergeAggregate(map[i].s, map[i].e) && findLeader(1) == findLeader(n)){
				maxWeight = map[i].l;
				break;
			}
		}
		
		printf("Scenario #%d:\n%d\n\n", k - cnt, maxWeight);
	}	
	
	return 0;
}
