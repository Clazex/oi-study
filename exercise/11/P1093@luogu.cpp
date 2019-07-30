#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

struct student{
	int num, chn, score; 
};

bool cmp(student a, student b){
	if(a.score != b.score) return a.score > b.score;
	if(a.chn != b.chn) return a.chn > b.chn;
	return a.num < b.num;
}

int main(){
	int i, n;
	int math, en;
	
	scanf("%d", &n);
	
	student s[n];
	
	for(i = 0; i < n; i++){
		s[i].num = i + 1;
		scanf("%d %d %d", &s[i].chn, &math, &en);
		s[i].score = s[i].chn + math + en;
	}
	
	sort(s, s + n, cmp);
	
	printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d\n", s[0].num, s[0].score, s[1].num, s[1].score, s[2].num, s[2].score, s[3].num, s[3].score, s[4].num, s[4].score);
	
	return 0;
}
