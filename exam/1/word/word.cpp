#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
#define scope if (true)
#define uns unsigned
#define reg register

enum {
	Inf = 0x3f3f3f3f,
	MaxN = 100000,
	MaxV = 4
};

inline void ios_sync(bool __sync = false);
inline void open_file(const std::string name = "test");
inline void open_test(const std::string name = "test");

int getId(char c);//0 - z, 1 - n

int bucket[MaxV];

int main() {
	ios_sync();
	open_file("word");
	//open_test("word5");
	
	int n;
	cin >> n;
	
	scope {
		char tmp;
		for (int i = 0; i < n; i++) {
			cin >> tmp;
			bucket[getId(tmp)]++;
		}
	}
	
	cout << bucket[0] << ' ' << bucket[1] << endl;
	
	//记得改文件IO！！！ 
	return 0;
}

int getId(char c) {
	switch(c) {
		case 'z':
			return 0;
		case 'n':
			return 1;
		default:
			return 2;
	}
}

inline void ios_sync(bool __sync) {
	std::ios::sync_with_stdio(__sync);
}

inline void open_file(const std::string name) {
	freopen((name + ".in").c_str(), "r", stdin);
	freopen((name + ".out").c_str(), "w", stdout);
}

inline void open_test(const std::string name) {
	freopen((name + ".in").c_str(), "r", stdin);
	//freopen("CON", "w", stdout);
}

