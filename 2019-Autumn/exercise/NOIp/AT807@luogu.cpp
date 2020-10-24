#include <cmath>
#include <cstdio>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
typedef long long ll;
typedef const char * const CPCSTR;
#define scope 			if (true)
#define mian 			main
#define uns 			unsigned
#define reg 			register
#define likely(x) 		__builtin_expect(!!(x), 1)
#define unlikely(x) 	__builtin_expect(!!(x), 0)
#define skip(typename)	if (true) {register typename __skip_temp__; std::cin >> __skip_temp__;}

enum {
	MaxN = 1000001
};

inline void ios_sync(const bool __sync = false);

bool prime(register const unsigned int n); 

CPCSTR yes = "YES", no = "NO";

int main() {
	ios_sync();
	
	register unsigned int n;
	cin >> n;
	cout << (prime(n) ? yes : no) << endl;
	
	return 0;
}

bool prime(register const unsigned int n) {
	struct Data {
		bool isPrime, isKnown;
	};
	
	static Data p[MaxN] = {{0, 1}, {0, 1}, {1, 1}, {1, 1}, {0, 1}, {1, 1}, {0, 1}, {1, 1}, {0, 1}, {0, 1}};
	
	if (p[n].isKnown) {
		return p[n].isPrime;//直接返回
	}
	
	if (n > 6) {//模6同余类
		register const unsigned int modsix = n % 6;
		if (modsix != 1 && modsix != 5) {
			p[n].isKnown = 1, p[n].isPrime = 0;
			return false;
		}
	} else if (n == 2 || n == 4 || n == 0) {//模6同余类的补充
		return false;
	}
	
	register const unsigned int sr = sqrt(n);
	for (register unsigned int i = 3; i <= sr; i += 2) {//一次加2越过偶数
		if (p[i].isKnown) {
			if (p[i].isPrime) {//i为质数
				if (n % i == 0) {
					p[n].isKnown = 1, p[n].isPrime = 0;
					return false;
				}
			}
		} else {
			if (prime(i)) {//递归
				if (n % i == 0) {
					p[n].isKnown = 1, p[n].isPrime = 0;
					return false;
				}
			}
		}
	}
	
	p[n].isKnown = 1, p[n].isPrime = 1;
	return true;
}

void ios_sync(const bool __sync) {
	std::ios::sync_with_stdio(__sync);
}

