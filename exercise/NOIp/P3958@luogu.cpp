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

inline void ios_sync (bool __sync = false) {
	std::ios::sync_with_stdio (__sync);
}

inline void open_file (const std::string _name = "test") {
	freopen ((_name + ".in").c_str (), "r", stdin);
	freopen ((_name + ".out").c_str (), "w", stdout);
}

const char * const yes = "Yes";
const char * const no = "No";

struct pos;
bool dfs (vector<pos>::const_iterator begin, vector<pos>::const_iterator end);

int main () {
	ios_sync ();
	
	short t;
	cin >> t;
	
	while (t--) {
		short n;
		ll h, r;
		cin >> n >> h >> r;
		
		vector<pos> seq;
		seq.reserve (n);
		
		scope {
			pos tmp;
			for (short i = 0; i < n; i++) {
				cin >> tmp;
				seq.push_back (tmp);
			}
		}
		
		sort (seq.begin (), seq.end ());
		if (seq[0].z - r > 0) {
			cout << no << endl;
			continue;
		}
		
		dfs (seq.begin (), seq.end ());
		
		cout << (flag ? yes : no) << endl;
	}
	
	return 0;
}

struct pos {
	ll x, y, z;
	
	static pos getInstance (ll x = 0, ll y = 0, ll z = 0) {
		pos n;
		n.x = x, n.y = y, n.z = z;
		return n;
	}
	
	bool operator< (const pos &rhs) const {
		return z != rhs.z
			? z < rhs.z
			: x != rhs.x
				? x < rhs.x
				: y < rhs.y;
	}
	
	bool operator> (const pos &rhs) const {
		return rhs < *this;
	}
	
	ll operator- (const pos &rhs) const {
		return (x + rhs.x) * (x + rhs.x) + (y + rhs.y) * (y + rhs.y) + (z + rhs.z) * (z + rhs.z);
	}
	
	friend istream &operator>> (istream &is, pos &p);
	friend ostream &operator<< (ostream &os, const pos &p);
};

bool dfs (vector<pos>::const_iterator begin, vector<pos>::const_iterator end) {
	for (; begin != end; ++begin) {
		
	}
}

istream &operator>> (istream &is, pos &p) {
	return is >> p.x >> p.y >> p.z;
}

ostream &operator<< (ostream &os, const pos &p) {
	return os << p.x << ' ' << p.y << ' ' << p.z; 
}

