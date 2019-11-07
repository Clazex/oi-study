#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define scope 			if (true)
#define mian 			main
#define ll 				long long
#define uns 			unsigned
#define reg 			register
#define likely(x) 		__builtin_expect(!!(x), 1)
#define unlikely(x) 	__builtin_expect(!!(x), 0)

enum {
	Inf = 0x3f3f3f3f,
	N = 6005
};

int head[N], net[N], to[N], cnt = 0;//链式前向星（存树） 
int dp[2][N], q[N], vis[N];//动态规划（树状）

void add(int u, int v) {
    net[++cnt] = head[u], to[cnt] = v, head[u] = cnt;
}

void dfs(int x) {
    dp[0][x] = q[x];
    dp[1][x] = 0;
    for (int i = head[x]; i != -1; i = net[i]) {
        int v = to[i];
        dfs(v);//遍历至子节点 
        dp[0][x] += dp[1][v];
        dp[1][x] += max(dp[0][v], dp[1][v]);//状态转移（根据子节点） 
    }
}

int main() {
    int n;
    while (~scanf("%d", &n)) {
        cnt = 0;
        memset(head, -1, sizeof(head));
        memset(vis, 0, sizeof(vis));
        for (int i = 1; i <= n; i++) scanf("%d", &q[i]);
        int u, v;
        while (~scanf("%d%d", &u, &v)) {
            if (!u && !v) break;
            add(v, u);
            vis[u]++;
        }
        int ans = -1;
        for (int i = 1; i <= n; i++) if (!vis[i]) ans = i;
        dfs(ans);
        printf("%d\n", max(dp[0][ans], dp[1][ans]));
    }
    return 0;
}

