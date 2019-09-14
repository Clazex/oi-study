#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
//#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define uns unsigned
#define reg register

#define INF (0x3f3f3f3f)

#define MAXN (1002)

int bs(vector<int> n, int m){
	uns int left = 0, right = n.size() - 1;
	while(left < right){
		int mid = (left + right) / 2;
		if(n[mid] == m){
			return mid;
		} else if(n[mid] > m){
			right = mid - 1;
		} else {
			left = mid + 1; 
		}
	}
	return -1;
}

int main(){
	vector<int> n;
	int m, l;
	scanf(" %d", &l);
	
	int t;
	for(int i = 0; i < l; i++){
		scanf(" %d", &t);
		n.push_back(t);
	}
	
	scanf(" %d", &m);
	
	printf("%d\n", bs(n, m));
	
	return 0;
}

