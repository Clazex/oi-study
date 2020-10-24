#include <cmath>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
typedef const char * const CPCSTR;
#define skip(typename)	if (true) {register typename __skip_temp__; std::cin >> __skip_temp__;}

enum {
	MaxN = 10000003
};

inline void ios_sync(const bool __sync = false);

bool prime(register const unsigned int n); 

CPCSTR yes = "Yes", no = "No";

int main() {
	ios_sync();
	
	skip(unsigned int);
	
	register unsigned int m;
	cin >> m;
	
	register unsigned int t;
	for (register unsigned int i = 0; i < m; i++) {
		cin >> t;
		cout << (prime(t) ? yes : no) << endl;
	}
	
	return 0;
}

bool prime(register const unsigned int n) {
	struct Data {
		bool isPrime, isKnown;
	};
	
	static Data p[MaxN] = {{0, 1}, {0, 1}, {1, 1}, {1, 1}, {0, 1}, {1, 1}, {0, 1}, {1, 1}};
	
	if (p[n].isKnown) {
		return p[n].isPrime;
	}
	
	p[n].isKnown = 1;
	
	if (n >= 5) {
		register const unsigned int modsix = n % 6;
		if (modsix != 1 && modsix != 5) {
			p[n].isPrime = 0;
			return false;
		}
	}
	
	register const unsigned int sr = sqrt(n);
	for (register unsigned int i = 5; i <= sr; i += 6) {
		if (p[i].isKnown) {
			if (p[i].isPrime && n % i == 0) {
				p[n].isPrime = 0;
				return false;
			}
		} else if (prime(i) && n % i == 0) {
			p[n].isPrime = 0;
			return false;
		}
		
		if (p[i + 2].isKnown) {
			if (p[i + 2].isPrime && n % (i + 2) == 0) {
				p[n].isPrime = 0;
				return false;
			}
		} else if (prime(i + 2) && n % (i + 2) == 0) {
			p[n].isPrime = 0;
			return false;
		}
	}
	
	p[n].isPrime = 1;
	return true;
}

void ios_sync(const bool __sync) {
	std::ios::sync_with_stdio(__sync);
}

