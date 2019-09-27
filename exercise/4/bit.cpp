#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
//#include <iostream>
using namespace std;
#define mian main
#define ll long long
#define uns unsigned
#define reg register

#define INF (0x3f3f3f3f)

#define MAXN (500005)

int p[MAXN] = {0}, n;

namespace bit {
	inline int lowbit (int x) {
		return x & (-x);
	}
	
	void bit_add (int *array, int totalNum, int index, int num) {
			while (index <= totalNum) {
				*(array + index) += num, index += lowbit(index);
			}
		}
	
	int bit_query (int *array, int index) {
		int sum = 0;
		
		while (index > 0) {
			sum += *(array + index), index -= lowbit(index);
		}
		
		return sum;
	}
};

using namespace bit;

int main () {
	int m, num;
	
	scanf(" %d %d", &n, &m);
	
	for (int i = 1; i <= n; i++) {
		scanf(" %d", &num);
		bit_add(p, n, i, num);
	}
	
	//operation : 1.add number to a certain number 2.output interval sum
	int operation, a, b;
	for (int i = 0; i < m; i++) {
		scanf(" %d %d %d", &operation, &a, &b);
		if (operation == 1) {
			bit_add(p, n, a, b);
		} else /*if (operation == 1) */{
			printf("%d\n", bit_query(p, b) - bit_query(p, a - 1));
		}
	}
	
	return 0;
}

