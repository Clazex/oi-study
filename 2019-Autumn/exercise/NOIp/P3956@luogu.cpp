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

struct Cell {
	unsigned short color;//0 - Empty, 1 - Red, 2 - Yellow, 3 - Artificial Red, 4 - Artificial Yellow
	
	void magicXpr();
};

int main() {
	ios_sync();
	
	
	
	return 0;
}

void Cell::magicXpr() {
	switch(color) {
		case 3:
			color = 1;
			break;
		case 4:
			color = 2;
			break;
		default:
			break;
	}
}

