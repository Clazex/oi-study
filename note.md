# 信息课

### 第一节课

1. 动态规划（善用`max()`更新）

------

### 第二节课

1. 最长子序列（背包变形）

2. 最长非递减子序列（在最长子序列的基础上增加条件判断）

3. `二分法`，对于一单调序列，不断从中间开始搜索以求指定值位置（常用于优化）

------

### 第三节课

1. `树`与`二叉树`相关概念

2. `协议`相关概念

------

### 第四节课

1. `树状数组` `Binary Indexed Tree` `BIT`

```c++
#include <cstdio>

namespace bit {
	inline int lowbit (int x) {
		return x & (-x);
	}
	
	void bit_add (int *array, int totalNum, int index, int num) {
		while (index <= totalNum) {
			*(array + index) += num, index += lowbit(index);
		}
	}
	
	int bit_query (int *array, int index) {
		int sum = 0;
		
		while (index > 0) {
			sum += *(array + index), index -= lowbit(index);
		}
		
		return sum;
	}
}

int p[500005], n;

int main () {
	int m, num;
	
	scanf(" %d %d", &n, &m);
	
	for (int i = 1; i <= n; i++) {
		scanf(" %d", &num);
		bit::bit_add(p, n, i, num);
	}
	
	//operation : 1.add number to a certain number 2.output interval sum
	int operation, a, b;
	for (int i = 0; i < m; i++) {
		scanf(" %d %d %d", &operation, &a, &b);
		if (operation == 1) {
			bit::bit_add(p, n, a, b);
		} else /*if (operation == 2) */{
			printf("%d\n", bit::bit_query(p, b) - bit::bit_query(p, a - 1));
		}
	}
	
	return 0;
}
```
**注意：存储时从\[1\]开始（因为lowbit(0) == 0）**

------

### 第五节课

1. 树的相关知识

------

### 第六节课

1. 树的遍历

2. 链式前向星

------

### 第九节课

1. `二叉堆`：保证父亲比两个孩子大

2. `ST表`：区间最值查询

```c++
void ST(int n) {//dp[i][j]表示区间[i, i + 2 ^ j - 1]的最值
    for (int i = 1; i <= n; i++) {
        dp[i][0] = i;
    }
    
    for (int j = 1; (1 << j) <= n; j++) {
        for (int  i = 1; (i + (1 << j) - 1) <= n; i++) {
            dp[i][j] = dp[i][j - 1] + dp[i + (1 << j - 1)][j - 1];
        }
    }
}
```

3. `三分法`：用于类似二次函数的分布的查询
```c++
int l = 0, r = n - 1;
while (l < r) {
	int m = (l + r) / 2, mm = (m + r) / 2;
	
	if (calc(m) < calc(mm)) {
		r = mm;
	} else {
		l = m;
	}
}
```

------
