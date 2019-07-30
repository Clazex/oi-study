#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

struct p{
	int s, e;
};

bool cmp(p a, p b){
	return a.e < b.e;
}

int main(){
	while(true){
		int n, i, c = 0, sum = 0;
		
		cin >> n;
		
		if(n == 0) return 0;
		
		p a[n];
		
		for(i = 0; i < n; i++){
			cin >> a[i].s >> a[i].e;
		}
		
		sort(a, a + n, cmp);
		
		for(i = 0; i < n; i++){
			if(a[i].s >= c){
				sum++;
				c = a[i].e;
			}
		}
		
		cout << sum << endl;
	}
	
	return 0;//Just a Placeholder
}
