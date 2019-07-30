#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

bool cmp(string a, string b){
    return a + b > b + a;
}

int main(){
    int n, i;
    cin >> n;
    
    string a[n];
    for(i = 0; i < n; i++){
    	cin >> a[i];
	}
    
    sort(a, a + n, cmp);
    
    for(i = 0; i < n; i++){
    	cout << a[i];
	}
	
    return 0;
}
