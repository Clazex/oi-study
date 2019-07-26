#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main(){
	int n, i, j, c, sum = 0;
	cin >> n;
	
	int a[n];
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	
	sort(a, a + n);
	
	for(i = 0; i < n - 1; i++){
		c = a[i] + a[i + 1];
		sum += c;
		
		for(j = i + 1; j < n - 1; j++){
            a[j] = a[j + 1];
            if(a[j] > c){
				a[j] = c;
				break;
            }
        }
        if(j == n - 1){
			a[n - 1] = c;
		}
	}
	
	cout << sum;
	
	return 0;
}
