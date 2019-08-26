#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

struct good{
	int unitPrice, amountAvailable;
};

bool cmpGood(good a, good b){
	return a.unitPrice < b.unitPrice;
}

int main(){
	int n, m, price = 0;
	scanf("%d %d", &n, &m);
	
	good milk[m];
	for(int i = 0; i < m; i++){
		scanf("%d %d", &milk[i].unitPrice, &milk[i].amountAvailable);
	}
	
	sort(milk, milk + m, cmpGood);
	
	for(int i = 0; i < m; i++){
		if(n < milk[i].amountAvailable){
			price += milk[i].unitPrice * n;
			break;
		}
		
		price += milk[i].amountAvailable * milk[i].unitPrice;
		n -= milk[i].amountAvailable;
	}
	
	printf("%d\n", price);
	
	return 0;
}
