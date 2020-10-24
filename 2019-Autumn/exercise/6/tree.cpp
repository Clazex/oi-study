#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
#define mian main
#define ll long long
#define uns unsigned
#define reg register

enum {
	Inf = 0x3f3f3f3f,
	MaxN = 105
};

inline void ios_sync (bool __sync = false) {
	std::ios::sync_with_stdio (__sync);
}

char tree[MaxN];

void build (uns int root = 1);
uns int getHeight (uns int root = 1);
uns int getSize (uns int root = 1);

int main () {
	ios_sync ();
	
	build ();
	
	cout << getHeight () << endl;
	cout << getSize () << endl;
	
	return 0;
}

void build (uns int root) {
	cin >> tree[root];
	
	if (tree[root] != '#') {
		build (root * 2);
		build (root * 2 + 1);
	}
}

uns int getHeight (uns int root) {
	return max (tree[root * 2] != '#' ? getHeight (root * 2) : 0,
			    tree[root * 2 + 1] != '#' ? getHeight (root * 2 + 1) : 0
			   )
		+ 1;
}

uns int getSize (uns int root) {
	return tree[root * 2] != '#' ? getHeight (root * 2) : 0
		+ tree[root * 2 + 1] != '#' ? getHeight (root * 2 + 1) : 0
		+ 1;
}

