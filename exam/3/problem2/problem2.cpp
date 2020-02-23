#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <list>
#include <string>
using namespace std;
typedef long long ll;
typedef const char * const CPCSTR;
#define uns unsigned
#define reg register
#define scope if (true)
#define skip(typename) if (true) { register typename __skip_temp__; std::cin >> __skip_temp__; }

enum {
	Inf = 0x3f3f3f3f,
	Mod = (int)(1e9 + 7),
	MaxN = (int)(1e6 + 2)
};

inline void ios_sync(const bool __sync = false);
inline void open_file(const std::string name = "test");
inline void open_test(const std::string name = "test");

int n, m;
list<int> l[MaxN];

namespace op {
	void op1(int i, int x);
	void op2(int i);
	void op3(int i, int x);
	void op4(int i);
	void op5(int i, int d);
	void op6(int i, int j);
}

int main() {
	ios_sync();
	//open_file("problem2");
	//open_test("problem2_1");
	
	cin >> n >> m;
	
	int o, l, r;
	while (m--) {
		cin >> o;
		switch (o) {
			case 1:
				cin >> l >> r;
				op::op1(l, r);
				break;
			case 2:
				cin >> l;
				op::op2(l);
				break;
			case 3:
				cin >> l >> r;
				op::op3(l, r);
				break;
			case 4:
				cin >> l;
				op::op4(l);
				break;
			case 5:
				cin >> l >> r;
				op::op5(l, r);
				break;
			case 6:
				cin >> l >> r;
				op::op6(l, r);
				break;
			default:
				break;
		}
	}
	
	return 0;
}

namespace op {
	void op1(int i, int x) {
		l[i].push_front(x);
	}
	
	void op2(int i) {
		cout << l[i].front() << endl;
		l[i].pop_front();
	}
	
	void op3(int i, int x) {
		l[i].push_back(x);
	}
	
	void op4(int i) {
		cout << l[i].back() << endl;
		l[i].pop_back();
	}
	
	void op5(int i, int d) {
		for (list<int>::iterator itr = l[i].begin(), itre = l[i].end(); itr != itre; ++itr) {
			(*itr) += d, (*itr) %= Mod;
		}
	}
	
	void op6(int i, int j) {
		l[i].splice(l[i].end(), l[j]);
	}
}

void ios_sync(const bool __sync) {
	std::ios::sync_with_stdio(__sync);
}

void open_file(const std::string name) {
	freopen((name + ".in").c_str(), "r", stdin);
	freopen((name + ".out").c_str(), "w", stdout);
}

void open_test(const std::string name) {
	freopen((name + ".in").c_str(), "r", stdin);
}

