#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
#define ll long long
#define uns unsigned
#define reg register

#define INF (0x3f3f3f3f)

#define MAXN (1002)
#define MAXM (102)

class memory{
	public:
		memory(int volumn = 0){
			max = volumn, index = 0, cnt = 0;
			memset(mem, -1, sizeof(mem));
			memset(isCached, 0, sizeof(isCached));
			return;
		}
		
		void cache(int n){
			if(isCached[n]){
				return;
			}
			
			isCached[mem[index]] = false;
			isCached[n] = true;
			
			mem[index++] = n;
			if(index >= max){
				index = 0;
			}
			
			cnt++;
			return;
		}
		
		int getOperationCount(){
			return cnt;
		}
	
	private:
		int max, index, cnt, mem[MAXM];
		bool isCached[MAXN];
};

int main(){
	int n, m;
	
	scanf(" %d %d", &m, &n);
	
	memory mem(m);
	
	int t;
	for(int i = 0; i < n; i++){
		scanf(" %d", &t);
		mem.cache(t);
	}
	
	printf("%d\n", mem.getOperationCount());
	
	return 0;
}

