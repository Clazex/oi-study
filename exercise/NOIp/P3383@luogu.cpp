#include <cstring>
#include <iostream>
using namespace std;

const int MAXN = 1000001;
const char *Y = "Yes\n", *N = "No\n";

inline void ios_sync (bool __sync = false) {
	std::ios::sync_with_stdio (false);
}

int prime[MAXN], cnt = 0;
bool p[MAXN];

int main () {
	ios_sync ();
	
	int n, m;
	
	cin >> n >> m;
	
	memset (p, 1, sizeof (p));
	
	p[0] = false, p[1] = false;
	
	for (int i = 2; i <= n; i++) {
		if (p[i]) {
			prime[++cnt] = i;
		}
		
		for(int j = 1; j <= cnt && i * p[j] <= n; j++) {
            p[i * prime[j]] = false;
            
            if(i % prime[j] == 0){
				break;
			}
        }
	}
	
	int t;
	for (int i = 0; i < m; i++) {
		cin >> t;
		cout << (p[t] ? Y : N);
	}
	
	cout.sync ();
	
	return 0;
}

