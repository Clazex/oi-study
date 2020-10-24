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

inline void ios_sync (const bool __sync = false) {
	std::ios::sync_with_stdio (__sync);
}

inline void open_file (const std::string _name = "test") {
	freopen ((_name + ".in").c_str (), "r", stdin);
	freopen ((_name + ".out").c_str (), "w", stdout);
}

int main () {
	ios_sync ();
	
	unsigned short homework, test, exam;
	cin >> homework >> test >> exam;
	cout << homework / 5 + test * 3 / 10 + exam / 2 << endl;
	
	return 0;
}

