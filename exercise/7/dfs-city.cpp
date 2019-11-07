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
	Mod = 1000000007
};

inline void ios_sync (const bool __sync = false) {
	std::ios::sync_with_stdio (__sync);
}

inline void open_file (const std::string _name = "test") {
	freopen ((_name + ".in").c_str (), "r", stdin);
	freopen ((_name + ".out").c_str (), "w", stdout);
}

struct node {
	int destination;
	node *next;
	
	node getInstance (int destination) {
		node x;
		x.destination = destination;
		next = NULL;
	}
	
	friend istream &operator>> (istream &is, node &x);
};

istream &operator>> (istream &is, node &x) {
	is >> node.destination;
}

int main () {
	ios_sync ();
	
	int n;
	cin >> n;
	
	vector<node> arr, head;
	arr.reserve (n); head.reserve (n);
	
	for (int i = 0; i < n - 1; i++) {
		
	}
	
	return 0;
}


