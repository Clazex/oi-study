#include <iostream>
#include <string>
using namespace std;

inline void ios_sync (bool __sync = false) {
	std::ios::sync_with_stdio (__sync);
}

int main(){
	ios_sync ();
	
	unsigned int l = 0;
	char current;
	
	while (cin >> current, current != '\n' && !cin.eof ()) {
		l++;
	}
	
	cout << l << endl;
	
	return 0;
}
