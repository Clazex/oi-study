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
	Inf = 0x3f3f3f3f
};

inline void ios_sync(const bool __sync = false) {
	std::ios::sync_with_stdio(__sync);
}

inline void open_file(const std::string name = "test") {
	freopen((name + ".in").c_str (), "r", stdin);
	freopen((name + ".out").c_str (), "w", stdout);
}

int main() {
	ios_sync();
	
	ll a, b;
	
	cin >> a >> b;
	cout << a * b - a - b << endl;
	
	return 0;
}

