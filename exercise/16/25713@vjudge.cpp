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

#define MAXN (105)
#define MAXM (105)

int n, m, s, v;

struct exchangePoint{
	int to;
	double rate, commission;
};

bool cmpExchangePoint(exchangePoint a, exchangePoint b){
	return (m - a.commission) * a.rate > (m - b.commission) * b.rate;
}

double exchange(double m, exchangePoint i){
	return (m - i.commission) * i.rate;
}

bool check(double m, exchangePoint i){
	return m > i.commission;
}

vector<exchangePoint> f[MAXN];

int main(){
	scanf("%d %d %d %f", &n, &m, &s, &v);
	
	exchangePoint v1, v2;
	for(int i = 0; i < m; i++){
		scanf("%d %d %f %f %f %f", &v2.to, &v1.to, &v1.rate, &v1.commission, &v2.rate, &v2.commission);
		f[v2.to].push_back(v1);
		f[v1.to].push_back(v2);
	}
	
	for(uns int i = 1; i < f[s].size(); i++){
		
	}
	
	return 0;
}
