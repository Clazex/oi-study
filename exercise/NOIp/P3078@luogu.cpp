#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
#define scope 			if (true)
#define mian 			main
#define ll 				long long
#define uns 			unsigned
#define reg 			register
#define likely(x) 		__builtin_expect(!!(x), 1)
#define unlikely(x) 	__builtin_expect(!!(x), 0)

#define unsigned long long

enum {
	Inf = 0x3f3f3f3f
};

inline void ios_sync (bool __sync = false) {
	std::ios::sync_with_stdio (__sync);
}

inline void open_file (std::string name = "test") {
	freopen ((name + ".in").c_str (), "r", stdin);
	freopen ((name + ".out").c_str (), "w", stdout);
}

int main () {
	ios_sync ();
	
	unsigned n, ans = 0, current = 0, previous = 0;
	cin >> n;
	while (n--) {
		cin >> current;
		if (current > previous) {
			ans += current - previous;
		}
		previous = current;
	}
	
	cout << ans << endl;
	
	return 0;
}

