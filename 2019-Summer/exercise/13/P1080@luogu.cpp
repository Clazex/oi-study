#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int productDigit = 0;
int product[4000] = {0};

struct minister{
	int left, right, moneyDigit;
	int money[4000];
};

bool cmpMinister(minister a, minister b){
	return a.left * a.right < b.left * b.right;
}

void multiply(int n){
	int i, carry = 0;
	for(i = 0; i < productDigit - 1; i++){
		product[i] *= n;
		product[i] += carry;
		if(product[i] >= 10){
			carry = product[i] / 10;
			product %= 10;
		}
	}
	
	for(; carry > 0; i++){
		product[i] *= n;
		product[i] += carry;
		if(product[i] >= 10){
			carry = product[i] / 10;
			product %= 10;
		}
	}
	
	productDigit = i;
	
	return;
}

int main(){
	int n, left, max = 0;
	scanf("%d", &n);
	scanf("%d", &left);
	int product = left, money;
	
	for(int i = 0; i < 1; i++){
		int right;
		scanf("%d", &right);
	}
	
	minister m[n];
	for(int i = 0; i < n; i++){
		scanf("%d %d", &m[i].left, &m[i].right);
	}
	
	sort(m, m + n, cmpMinister);
	
	for(int i = 0; i < n; i++){
		money = product / m[i].right;
		if(money > max){
			max = money;
		}
		product *= m[i].left;
	}
	
	printf("%d\n", max);
	
	return 0;
}
