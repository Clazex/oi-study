#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
typedef const char * const CPCSTR;
#define uns unsigned
#define reg register
#define scope if (true)
#define skip(typename) if (true) { register typename __SKIP_TEMP__; std::cin >> __SKIP_TEMP__; }

enum {
	Inf = 0x3f3f3f3f,
	Mod = 998244353
};

inline void ios_sync(const bool __sync = false);
inline void open_file(const std::string name = "test");
inline void open_test(const std::string name = "test");

int n;
ll ans;

ll powmod(ll radix, ll index, ll module) {
	ll ans = 1LL;
	radix %= module;
	while (index) {
		if (index % 2 == 1LL) ans = (ans * radix) % module;
		index >>= 1, radix = (radix * radix) % module;
	}
	return ans;
}

int main() {
	ios_sync();
	open_file("game");
	//open_test("game");
	
	cin >> n;
	
	cout << powmod(n, 2, Mod) << endl;
	
	return 0;
}

inline void ios_sync(const bool __sync) {
	std::ios::sync_with_stdio(__sync);
}

inline void open_file(const std::string name) {
	freopen((name + ".in").c_str(), "r", stdin);
	freopen((name + ".out").c_str(), "w", stdout);
}

inline void open_test(const std::string name) {
	freopen((name + ".in").c_str(), "r", stdin);
}

