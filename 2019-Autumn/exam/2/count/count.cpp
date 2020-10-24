#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <queue>
using namespace std;
typedef long long ll;
typedef const char * const CPCSTR;
#define uns unsigned
#define reg register
#define scope if (true)
#define skip(typename) if (true) { register typename __SKIP_TEMP__; std::cin >> __SKIP_TEMP__; }

enum {
	Inf = 0x3f3f3f3f,
	MaxN = 100005,
	Mod = (int)(1e9 + 7)
};

inline void ios_sync(const bool __sync = false);
inline void open_file(const std::string name = "test");
inline void open_test(const std::string name = "test");

int n, p[MaxN];
ll sum, power = 1LL;
const ll threshold = 1LL << 31; 

int main() {
	ios_sync();
	open_file("count");
	//open_test("count1");
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	sort(p, p + n);
	
	for (int i = 0; i < n; i++) {
		sum += p[i] % Mod * power, sum %= Mod;
		sum -= p[n - i - 1] % Mod * power, sum %= Mod;
		power *= 2;
		if (power >= threshold) power %= Mod;
	}
	
	cout << sum << endl;
	
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

