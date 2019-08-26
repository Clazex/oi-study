#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

struct cood{
	int x, step;
}queue[200002];

int n, k;
int book[200002] = {0};

bool check(int x){
	if(x < 0 || x >= 200000 || book[x] == 1){
		return false;
	}
	return true;
}

int bfs(int n, int k){
	int head = 0, tail = 0;
	
	cood start;
	start.x = n, start.step = 0;
	queue[tail++] = start;
	book[n] = 1;
	
	if(start.x == k){
		//printf("Reached\n"); 
		return start.step;
	}
	
	while(head < tail){
		cood temp = queue[head];
		head++;
		
		int nx;
		
		nx = temp.x + 1;
		if(check(nx)){
			if(temp.x == k){
				//printf("Reached\n"); 
				return temp.step;
			}
			book[nx] = 1;
			cood t;
			t.x = nx, t.step = temp.step + 1;
			queue[tail++] = t;
			//printf("(%d)	added\n", nx); 
		}
		
		nx = temp.x - 1;
		if(check(nx)){
			if(temp.x == k){
				//printf("Reached\n"); 
				return temp.step;
			}
			book[nx] = 1;
			cood t;
			t.x = nx, t.step = temp.step + 1;
			queue[tail++] = t;
			//printf("(%d)	added\n", nx); 
		}
		
		nx = temp.x * 2;
		if(check(nx)){
			if(temp.x == k){
				//printf("Reached\n"); 
				return temp.step;
			}
			book[nx] = 1;
			cood t;
			t.x = nx, t.step = temp.step + 1;
			queue[tail++] = t;
			//printf("(%d)	added\n", nx); 
		}
		
		//printf("(%d)	removed\n", temp.x); 
	}
}

int main(){
	scanf(" %d %d", &n, &k);
	
	printf("%d\n", bfs(n, k));
	
	return 0;
}
