#include <iostream>
using namespace std;

int main(){
	int l, m, i, j, sum=0;
	cin >> l >> m;
	int a[m], b[m], tree[l + 1] = {0};
	
	for(i = 0; i < m; i++){
		cin >> a[i] >> b[i];
	}
	
	for(i = 0; i < m; i++){
		for(j = a[i]; j <= b[i]; j++){
			tree[j] = 1;
		}
	}
	
	for(i = 0; i < l + 1; i++){
		if(!tree[i]){
			sum++;
		}
	}
	
	cout << sum << endl;
    return 0;
}
