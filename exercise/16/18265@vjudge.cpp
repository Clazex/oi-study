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
	int /*u start,*/ v/*end*/, w/*length(weight)*/;
};

int t, n;
vector<route> map[MAXN];
int dis[MAXN];
bool book[MAXN] = {0};

void dijkstra(int s){
	memset(dis, INF, sizeof(dis));
    for(reg int i = 0; i < map[s].size(); i++) {
        dis[map[s][i].v] = min(map[s][i].w, dis[map[s][i].v]);
    }
	book[s] = true;
	dis[s] = 0;
	
	for(reg int i = 0; i < n - 1; i++){
		int minIndex = 0, minNum = 1061109568;
		for(reg int i = 1; i <= n; i++){
			if(!book[i] && minNum > dis[i]){
				minIndex = i;
				minNum = dis[i];
			}
		}
		
		book[minIndex] = true;
		for(reg uns int i = 0; i < map[minIndex].size(); i++){
			if(!book[map[minIndex][i].v]){
				dis[map[minIndex][i].v] = min(dis[map[minIndex][i].v], dis[minIndex] + map[minIndex][i].w);
			}
		}
	}
	
	return;
}

int main(){
	scanf("%d %d", &t, &n);
	
	int u, v;
	route temp;
	for(reg int i = 0; i < t; i++){
		scanf("%d %d %d", &u, &v, &temp.w);
		temp.v = v;
		map[u].push_back(temp);
		temp.v = u;
		map[v].push_back(temp);
	}
	
	dijkstra(n);
	
	if(dis[1] != INF){
		printf("%d\n", dis[1]);
	} else {
		printf("2147483647\n");
	}
	
	return 0;
}
