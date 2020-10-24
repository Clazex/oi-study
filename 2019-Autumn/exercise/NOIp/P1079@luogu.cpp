#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define uns unsigned
#define reg register

#define INF (0x3f3f3f3f)

#define MAXN (1002)
#define MAXK (102)

char key[MAXK], cipher[MAXN];
bool cap[MAXN] = {0};
int keyPointer = 0, keyLen, cipherLen;
char mapping[28][28] = {
{""},
{" abcdefghijklmnopqrstuvwxyz"},
{" zabcdefghijklmnopqrstuvwxy"},
{" yzabcdefghijklmnopqrstuvwx"},
{" xyzabcdefghijklmnopqrstuvw"},
{" wxyzabcdefghijklmnopqrstuv"},
{" vwxyzabcdefghijklmnopqrstu"},
{" uvwxyzabcdefghijklmnopqrst"},
{" tuvwxyzabcdefghijklmnopqrs"},
{" stuvwxyzabcdefghijklmnopqr"},
{" rstuvwxyzabcdefghijklmnopq"},
{" qrstuvwxyzabcdefghijklmnop"},
{" pqrstuvwxyzabcdefghijklmno"},
{" opqrstuvwxyzabcdefghijklmn"},
{" nopqrstuvwxyzabcdefghijklm"},
{" mnopqrstuvwxyzabcdefghijkl"},
{" lmnopqrstuvwxyzabcdefghijk"},
{" klmnopqrstuvwxyzabcdefghij"},
{" jklmnopqrstuvwxyzabcdefghi"},
{" ijklmnopqrstuvwxyzabcdefgh"},
{" hijklmnopqrstuvwxyzabcdefg"},
{" ghijklmnopqrstuvwxyzabcdef"},
{" fghijklmnopqrstuvwxyzabcde"},
{" efghijklmnopqrstuvwxyzabcd"},
{" defghijklmnopqrstuvwxyzabc"},
{" cdefghijklmnopqrstuvwxyzab"},
{" bcdefghijklmnopqrstuvwxyza"},
};

int main(){
	scanf(" %s %s", key, cipher);
	
	keyLen = strlen(key), cipherLen = strlen(cipher);
	
    for(int i = 0; i < keyLen; i++){
		if(key[i] < 96) key[i] += 32;
	}
	for(int i = 0; i < cipherLen; i++){
		if(cipher[i] < 96) cipher[i] += 32, cap[i] = true;
	}
	
	for(int i = 0; i < cipherLen; i++){
        char u = cipher[i];
        char v = key[i % keyLen];
        if(i == 0) v = key[0];
        printf("%c", cap[i] ? mapping[v - 96][u - 96] - 32 : mapping[v - 96][u - 96]);
    }
    
    printf("\n");
    
	return 0;
}

