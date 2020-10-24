#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
typedef const char * const CPCSTR;
#define uns unsigned
#define reg register
#define scope if (true)
#define skip(typename) if (true) { register typename __skip_temp__; std::cin >> __skip_temp__; }

enum {
	Inf = 0x3f3f3f3f,
	Mod = (int)(1e9 + 7)
};

inline void ios_sync(const bool __sync = false);
inline void open_file(const std::string name = "test");
inline void open_test(const std::string name = "test");

void out(const int n, const ll m);

ll factorial(int n, int module = Mod) {
	ll ans = 1LL;
	while (n > 1) {
		ans *= n, ans %= module, n--;
	}
	return ans;
}

int main() {
	ios_sync();
	open_file("problem1");
	//open_test("problem1_1");
	
	int n;
	cin >> n;
	
	out(n, (factorial(n) + 1LL) / 2LL);
	
	return 0;
}

void out(const int n, const ll m) {
	cout << "The ";
	
	const ll x = n / 100;
	const int y = n % 100;
	
	if (x != 0) cout << x;
	if (y > 10 && y <= 20) {
		cout << y << "th";
	} else {
		if (y / 10 != 0 || x != 0) cout << y / 10;
		const int z = y % 10;
		switch (z) {
			case 1:
				cout << "1st";
				break;
			case 2:
				cout << "2nd";
				break;
			case 3:
				cout << "3rd";
				break;
			default:
				cout << z << "th";
				break;
		}
	}
	cout << " answer is " << m << '.' << endl;
}

void ios_sync(const bool __sync) {
	std::ios::sync_with_stdio(__sync);
}

void open_file(const std::string name) {
	freopen((name + ".in").c_str(), "r", stdin);
	freopen((name + ".out").c_str(), "w", stdout);
}

void open_test(const std::string name) {
	freopen((name + ".in").c_str(), "r", stdin);
}

