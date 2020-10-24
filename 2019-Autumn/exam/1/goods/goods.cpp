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
	MaxN = 2005
};

inline void ios_sync(bool __sync = false);
inline void open_file(const std::string name = "test");
inline void open_test(const std::string name = "test");

int n, w;
int goods[MaxN];

int map[MaxN][MaxN];
bool vis[MaxN];

struct node {
	int req, id;
	bool operator< (const node & rhs) { return req < rhs.req; }
};

node seq[MaxN];

ll bfs(int root = 1) {
	ll time = 0LL, g = 0LL;
	sort(seq + 1, seq + n + 1);
	for (int i = 0; i < n; i++) {
		time = seq[i].req, g += goods[seq[i].id];
		if (g >= w) break;
	}
	return time;
}

void dfs(int root = 1) {
	for (int i = 1; i <= n; i++) {
		if (map[root][i] != 0 && !vis[i]) {
			//cout << "@Visiting " << i << endl;
			vis[i] = true;
			seq[i].req = max(map[root][i], seq[root].req), seq[i].id = i;
			dfs(i);
		}
	}
}

int main() {
	ios_sync();
	open_file("goods");
	//open_test("3");
	//记得改文件IO！！！ 
	
	cin >> n >> w;
	
	goods[1] = 0;
	for (int i = 2; i <= n; i++) {
		cin >> goods[i];
	}
	
	int u, v, w;
	for (int i = 1; i < n; i++) {
		cin >> u >> v >> w;
		map[u][v] = w, map[v][u] = w;
	}
	
	seq[1].id = 1, seq[1].req = 0;
	vis[1] = true;
	dfs();
	
	cout << bfs() << endl;
	
	//记得改文件IO！！！ 
	//记得改文件IO！！！ 
	//记得改文件IO！！！ 
	return 0;
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

