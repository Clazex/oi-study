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
#define mian main
#define ll long long
#define uns unsigned
#define reg register

#define INF (0x3f3f3f3f)

#define MAXN (500005)

int p[MAXN] = {0}, n;

class bit {
	public:
		static int lowbit (int x) {
			return x & (-x);
		}
		
		static void add (int k, int num) {
			while (k <= n) {
				p[k] += num, k += lowbit(k);
			}
		}
		
		static int query (int k) {
			int sum = 0;
			
			while (k > 0) {
				sum += p[k], k -= lowbit(k);
			}
			
			return sum;
		}
};

int main () {
	int m, num;
	
	scanf(" %d %d", &n, &m);
	
	for (int i = 1; i <= n; i++) {
		scanf(" %d", &num);
		bit::add(i, num);
	}
	
	int operation, a, b;
	for (int i = 0; i < m; i++) {
		scanf(" %d %d %d", &operation, &a, &b);
		if (operation == 1) {
			bit::add(a, b);
		} else /*if (operation == 1) */{
			printf("%d\n", bit::query(b) - bit::query(a - 1));
		}
	}
	
	return 0;
}

