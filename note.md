# 信息课

### 第1节课

1. 喜闻乐见的`Hello World`
2. 变量（`variable`）的类型

------

### 第二节课

1. 条件判断（`if`、`else`）
2. 循环（`for`、`while`）（`for(循环前;条件;每次循环后)`）

------

### 第三节课

1. 多重循环
2. 浮点型的运算（如`1.0/n`中`.0`指定结果为浮点型）

------

### 第四节课

1. 一维数组的声明与使用

------

### 第五节课

1. 二维数组的声明与使用（配合双重循环）

------

### 第六节课

1. `scanf`和`printf`的用法（`%d`作整形占位符（`%`后加`.<int>`表示用空格补足到`<int>`位，后加`.0<int>`表示用`0`补足到`<int>`位），`%f`作单精度浮点型占位符，`%lf`作双精度浮点型（`long float`）占位符（`%`后加`.<int>`表示精确到`<int>`位）,`%c`作字符占位符）
> `scanf`和`printf`比`cin`和`cout`快近10倍

```c++
//一个例子
#include <iostream>
using namespace std;

int main(){
	int a = 1, b = 2;
	double pi = 3.1415926
	printf("%da", a);//会输出"1a"
	printf("%.2lf", pi);//会输出"3.14"
	printf("%5d", b);//会输出"    2"
	
	int c, d;
	scanf("&d &d", &c, &d);//“&”表示取地址
	printf("&d &d", d, c);
	
	return 0;
}
```

2. 字符串（字符数组，占位符为`%s`，不需要`&`）
3. `cin.getline(char[] string, int maxChar)`用于获取整行（可带空格）的字符串

------

### 第七节课

1. 利用`while`读多行（当读到`EOF`的时候停）

```c++
//一个例子
#include <iostream>
using namespace std;

int main(){
	char = str[102];
	int sum = 0;
	
	while(cin >> str){
		sum++;
	}
	
	cout << sum << endl;
	
	return 0;
}
```

2. `strlen(char[] string)`取长度、`strcpy(char[] string)`复制、`strcat(char[] string)连接`、`strcmp(char[] string)`对比、`strstr(char[] string)`查找第一个（复杂，不要用）（位于`cstring`中）

------

### 第八节课

1. 排序`sort(Int address, Int address, Bool [function])`(如`sort(a, a + 3)`会排序`a`中的第1 ~ 3个数)（在`algorithm`中），将数组从小到大排，第三个参数指定比较方式

```c++
bool cmp(int a, int b){
	return a > b;//sort调用此函数可以从大到小排
}
```

2. `结构 struct`自定义变量类型

```c++
#include <cstdio>
using namespace std;

struct Data{
	int a, b;
};

bool cmp(Data x, Data y){
	return x.b > y.b;//按b从大到小排序
}

int main(){
	Data t[3000];
	int c, n;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d %d", t[i].a, t[i].b);
	}
	
	sort(t, t + n, cmp);
	
	for(int i = 0; i < n; i++){
		printf("%d %d\n", t[i].a, t[i].b);
	}
	
	return 0;
}
```

------

### 第九节课

1. `桶排序`，用下标表示数字，数字表示次数

```c++
#include <cstdio>
using namespace std;

int main(){
	int n, m, a[1000] = {0};
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%d", &m);
		a[m]++;
	}
	
	for(int i = 0; i < 1000; i++){
		for(int j = 0; j < a[i]; j++){
			printf("%d ", i);
		}
	}
	
	return 0;
}
```

------
