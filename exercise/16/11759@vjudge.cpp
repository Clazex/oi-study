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

#define MAXN (202)

struct route{
	int s, e;
	double l;
};
route map[MAXN * MAXN];

struct cood{
	double x, y;
};
cood g[MAXN];

int f[MAXN];

int findLeader(int index){
	return index == f[index] ? f[index] : f[index] = findLeader(f[index]);
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
	return a.l < b.l;
}

double dist(cood a, cood b){
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main(){
	int n, cnt = 1;
	
	while(cin >> n && n){
		for(int i = 0; i < n; i++){
			cin >> g[i].x >> g[i].y;
			f[i] = i;
		}
		
		int cntE = 0;
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				map[cntE].s = i, map[cntE].e = j, map[cntE++].l = dist(g[i], g[j]);
			}
		}
		
		sort(map, map + cntE, cmpRoute);
		
		double minLen;
		for(int i = 0; i < cntE; i++){
			if(mergeAggregate(map[i].s, map[i].e) && findLeader(0) == findLeader(1)){
				minLen = map[i].l;
				break;
			}
		}
		
		printf("Scenario #%d\nFrog Distance = %.3f\n\n", cnt++, minLen);
	}
	
	return 0;
}
