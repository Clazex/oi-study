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
