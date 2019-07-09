#include <iostream>
using namespace std;

int main(){
	int n, i, a=0, b=0, c=0, d=0, e=0;
	cin >> n;
	int array[n];
	
	for(i=0;i<n;i++){
		cin >> array[i];
	}
	
	for(i=0;i<n;i++){
		if(array[i]>=90 && array[i]<=100)
			a++;
		else if(array[i]>=80 && array[i]<=89)
			b++;
		else if(array[i]>=70 && array[i]<=79)
			c++;
		else if(array[i]>=60 && array[i]<=69)
			d++;
		else
			e++;
	}
	
	cout << a << endl << b << endl << c << endl << d << endl << e << endl;
	return 0;
}
