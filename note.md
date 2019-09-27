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
	
	std::scanf(" %d %d", &n, &m);
	
	for (int i = 1; i <= n; i++) {
		std::scanf(" %d", &num);
		bit::bit_add(p, n, i, num);
	}
	
	//operation : 1.add number to a certain number 2.output interval sum
	int operation, a, b;
	for (int i = 0; i < m; i++) {
		std::scanf(" %d %d %d", &operation, &a, &b);
		if (operation == 1) {
			bit::bit_add(p, n, a, b);
		} else /*if (operation == 1) */{
			std::printf("%d\n", bit::bit_query(p, b) - bit::bit_query(p, a - 1));
		}
	}
	
	return 0;
}
```
**注意：存储时从\[1\]开始（因为lowbit(0) == 0）**

------
