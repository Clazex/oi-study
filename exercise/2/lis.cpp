#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define uns unsigned
#define reg register

#define INF (0x3f3f3f3f)

#define MAXN (100002)
#define EXPECTED_LIS_LENGTH (10001)

inline void ios_sync (bool __sync = false) {
	std::ios::sync_with_stdio (__sync);
}

vector<int> lis;

int main(){
	ios_sync ();
	
	int n;
	
	cin >> n;
	
	lis.reserve (EXPECTED_LIS_LENGTH);
	
	int t;
	cin >> t;
	lis.push_back (t);
	for (int i = 1; i < n; i++) {
		cin >> t;
		
		int upper = upper_bound (lis.begin (), lis.end (), t) - lis.begin ();
		if (upper >= lis.size ()) {
			lis.push_back (t);
		} else {
			lis[upper] = t;
		}
	}
	
	cout << lis.size () << endl;
	
	return 0;
}

