#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

struct candidate{
	int n;
	char t[100];
};

bool cmp(candidate a, candidate b){
	if(strlen(a.t) != strlen(b.t)){
		return strlen(a.t) > strlen(b.t);
	}
	else{
		return strcmp(a.t, b.t) > 0;
	}
}

int main(){
	int i, n;
	
	scanf("%d", &n);
	
	candidate p[n];
	
	for(i = 0; i < n; i++){
		scanf("%s", p[i].t);
		p[i].n = i + 1;
	}
	
	sort(p, p + n, cmp);
	
	printf("%d\n%s\n", p[0].n, p[0].t);
	
	return 0;
}

