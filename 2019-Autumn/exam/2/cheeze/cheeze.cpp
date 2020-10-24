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
	MaxN = 1005
};

inline void ios_sync(const bool __sync = false);
inline void open_file(const std::string name = "test");
inline void open_test(const std::string name = "test");

struct Hole {
	ll x, y, z;
	
	const ll operator- (const Hole & rhs) {
		return ((x - rhs.x) * (x - rhs.x) + (y - rhs.y) * (y - rhs.y) + (z - rhs.z) * (z - rhs.z));
	}
};

Hole p[MaxN];
bool v[MaxN];
ll t, n, h, r, dd;
CPCSTR yes = "Yes", no = "No";

bool dfs(const int root) {
	//cout << p[root].z << " + " << r << " >= " << h << "\t\t" << (p[root].z + r >= h) << endl;
	if (p[root].z + r >= h) {
		return true;
	}
	
	for (int i = 0; i < n; i++) {
		//cout << p[i].z << " - " << r << endl;
		if (!v[i] && dd >= p[root] - p[i]) {
			//cout << "Going to " << i << endl;
			v[i] = true;
			if (dfs(i)) return true;
		}
	}
	return false;
}

bool wdfs() {
	memset(v, 0, sizeof(Hole) * (n + 1));
	for (int i = 0; i < n; i++) {
		//cout << p[i].z << " - " << r << endl;
		if (!v[i] && p[i].z - r <= 0) {
			//cout << "Start at " << i << endl;
			v[i] = true;
			if (dfs(i)) return true;
		}
	}
	return false;
}

int main() {
	ios_sync();
	open_file("cheeze");
	//open_test("cheeze");
	
	cin >> t;
	while (t--) {
		cin >> n >> h >> r;
		dd = 4 * r * r;
		
		for (ll i = 0; i < n; i++) {
			cin >> p[i].x >> p[i].y >> p[i].z;
		}
		
		cout << (wdfs() ? yes : no) << endl;
	}
	
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

