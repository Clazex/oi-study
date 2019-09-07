#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

struct student{
	char name[20];
	int money, num;
};

bool cmp(student a, student b){
	if(a.money != b.money) return a.money > b.money;
	return a.num < b.num;
}

int main(){
	int i, n, total = 0;
	
	scanf("%d", &n);
	
	student s[n];
	
	for(i = 0; i < n; i++){
		char tmp;
		int avr, cls, paper;
		bool isWestern = false, isCadre = false;
		
		s[i].num = i;
		scanf("%s %d %d", s[i].name, &avr, &cls);
		scanf(" %c", &tmp);
		if(tmp == 'Y') isCadre = true;
		scanf(" %c", &tmp);
		if(tmp == 'Y') isWestern = true;
		scanf("%d", &paper);
		
		s[i].money = 0;
		if(avr > 80 && paper >= 1) s[i].money += 8000;
		if(avr > 85 && cls > 80) s[i].money += 4000;
		if(avr > 90) s[i].money += 2000;
		if(avr > 85 && isWestern) s[i].money += 1000;
		if(cls > 80 && isCadre) s[i].money += 850;
		
		total += s[i].money;
	}
	
	sort(s, s + n, cmp);
	
	printf("%s\n%d\n%d\n", s[0].name, s[0].money, total);
	
	return 0;
}

