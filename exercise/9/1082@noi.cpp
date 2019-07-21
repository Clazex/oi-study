#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
int main () {
	char a[256], b[256];
	int c, d, i, j, pointer, mx;

	while (cin >> a >> b) {
		
		/*
		过不了（代替11行） 
		while(true){
			scanf("%d %d", &a. &b);
		*/
		
		
		c = strlen(a);
		d = strlen(b);
		if (c == 1 || d == 1)
			break;

		mx = 0;

		for (i = 0; i < c; i++) {
			for (j = 0; j < d; j++) {
				pointer = 0;
				while(a[(i + pointer) % c] == b[(j + pointer) % d] && pointer < min(c, d)){
					pointer++;
				}
				mx = max(pointer, mx);
			}
		}

		printf("%d\n", mx);
	}

	return 0;
}
