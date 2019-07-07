#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	
	for(a=0;a<10;a++){
		for(b=0;b<10;b++){
			for(c=0;c<10;c++){
				if(c>a && a>b && a+b+c==a*b*c)
					cout << a << b << c << endl;
			}
		}
	}
	
	//cout << "213" << endl;
	
    return 0;
}