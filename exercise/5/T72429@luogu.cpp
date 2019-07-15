#include <iostream>
using namespace std;

int main(){
	int n, m, i, j, min = 1001, minX, minY;
	cin >> n >> m;
	int a[n][m];
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> a[i][j];
			if(a[i][j] < min){
				min = a[i][j], minX = i, minY = j;
			}
		}
	}
	
	cout << min << " " << minX << " " << minY << endl;
	
    return 0;
}
