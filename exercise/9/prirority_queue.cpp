#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <queue>
using namespace std;
typedef long long ll; 
#define scope 			if (true)
#define mian 			main
#define uns 			unsigned
#define reg 			register
#define likely(x) 		__builtin_expect(!!(x), 1)
#define unlikely(x) 	__builtin_expect(!!(x), 0)

enum {
	Inf = 0x3f3f3f3f
};

inline void ios_sync(const bool __sync = false);
inline void open_file(const std::string name = "test");
inline void open_test(const std::string name = "test");

int main() {
	ios_sync();
	
	priority_queue<int> pq;
	
	int t;
	while (cin >> t, !cin.eof()) {
		pq.push(t);
	}
	
	while (!pq.empty()) {
		cout << pq.top() << endl;
		pq.pop();
	}
	
	return 0;
}

void ios_sync(const bool __sync) {
	std::ios::sync_with_stdio(__sync);
}

void open_file(const std::string name) {
	freopen((name + ".in").c_str (), "r", stdin);
	freopen((name + ".out").c_str (), "w", stdout);
}

void open_test(const std::string name) {
	freopen((name + ".in").c_str (), "r", stdin);
}

