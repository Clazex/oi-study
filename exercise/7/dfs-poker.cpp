#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define scope 			if (true)
#define mian 			main
#define ll 				long long
#define uns 			unsigned
#define reg 			register
#define likely(x) 		__builtin_expect(!!(x), 1)
#define unlikely(x) 	__builtin_expect(!!(x), 0)

enum {
	Inf = 0x3f3f3f3f,
	MaxN = 100005
};

inline void ios_sync (const bool __sync = false) {
	std::ios::sync_with_stdio (__sync);
}

inline void open_file (const std::string _name = "test") {
	freopen ((_name + ".in").c_str (), "r", stdin);
	freopen ((_name + ".out").c_str (), "w", stdout);
}

const char * const yes = "Yes";
const char * const no = "No";

int n, k, q;
int a[MaxN][2] = {0};
bool flag = false;
bool book[MaxN] = {0};

void dfs (int mz /*面值*/, int r /*中止面值*/);

int main () {
	ios_sync ();
	
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		cin >> a[i][0] >> a[i][1];
	}
	cin >> q;
	int l, r;
	for (int i = 0; i < q; i++) {
		cin >> l >> r;
		flag = false;
		dfs (l, r);
		cout << (flag ? yes : no) << endl;
	}
	
	return 0;
}

void dfs (int mz, int r) {
	if (mz == r + 1) {
		flag = true;
		return;
	} else if (flag) {
		return;
	}
	
	for (int i = 0; i < k; i++) {
		if (!book[i]) {
			if (a[i][0] == mz) {
				book[i] = true;
                dfs (mz + 1, r);
                book[i] = false;
			}
			if (a[i][0] != a[i][1] && a[i][1] == mz) {
				book[i] = true;
                dfs (mz + 1, r);
                book[i] = false;
			}
		}
	}
}

