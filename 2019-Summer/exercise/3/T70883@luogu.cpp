#include <iostream>
using namespace std;

int main(){	
	for(int rooster=0;3*rooster<=100;rooster++){
		for(int hen=0;3*rooster+2*hen<=100;hen++){
			if(!(200-8*rooster-5*hen) && rooster*hen*(300-9*rooster-6*hen)!=0){
				cout << rooster << " " << hen << " " << 300-9*rooster-6*hen << endl;
			}
		}
	}
	
    return 0;
}