#include <iostream>
#include <vector>
using namespace std;

enum {
	Inf = 0x3f3f3f3f,
	MaxN = 105,
	Root = 1
};

inline void ios_sync (bool __sync = false) {
	std::ios::sync_with_stdio (__sync);
}

vector<unsigned int> tree[MaxN];
bool visited[MaxN];
unsigned int depth[MaxN], size[MaxN];

void dfs (unsigned int root, unsigned int layer = 1) {
	size[root] = 1, visited[root] = true, depth[root] = layer;
	for (vector<unsigned int>::const_iterator itr = tree[root].begin (); itr != tree[root].end (); ++itr) {
		if (!visited[*itr]) {
			dfs (*itr, layer + 1);
			size[root] += size[*itr];
		}
	}
	return;
}

inline void link (unsigned int a, unsigned int b) {
	tree[a].push_back (b);
	tree[b].push_back (a);
}

int main () {
	ios_sync ();
	
	int n;
	cin >> n;
	
	int a, b;
	for (unsigned int i = 1; i < n; i++) {
		cin >> a >> b;
		link (a, b);
	}
	
	dfs (Root);
	
	for (unsigned int i = 1; i <= n; i++) {
		cout << depth[i] << ' ';
	}
	cout << endl;
	
	for (unsigned int i = 1; i <= n; i++) {
		cout << size[i] << ' ';
	}
	cout << endl;
	
	return 0;
}

