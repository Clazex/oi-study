#include <iostream>
using namespace std;

int main(){
	int x, y, i, j, a[6][5];
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			cin >> a[i][j];
		}
	}
	
	cin >> x >> y;
	
	for(j = 0; j < 5; j++){
		a[5][j] = a[x-1][j];
		a[x-1][j] = a[y-1][j];
		a[y-1][j] = a[5][j];
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
    return 0;
}
