#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

struct interval{
	int start, end;
};

bool cmpInterval(interval a, interval b){
	return a.end < b.end;
}

int main(){
	int n, currentTime = 0, sum = 0;
	scanf("%d", &n);
	
	interval competition[n];
	for(int i = 0; i < n; i++){
		scanf("%d %d", &competition[i].start, &competition[i].end);
	}
	
	sort(competition, competition + n, cmpInterval);
	
	for(int i = 0; i < n; i++){
		if(competition[i].start >= currentTime){
			currentTime = competition[i].end;
			sum++;
		}
	}
	
	printf("%d\n", sum);
	
	return 0;
}
