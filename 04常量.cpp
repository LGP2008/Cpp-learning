#include<iostream>
using namespace std;
/*常量
作用：用于记录内存中不可更改的数据
C++定义常量两种方式
1.#define 宏常量：#define 常量名 常量值
（通常在文件上方定义，表示一个常量）
2.const修饰的变量 const 数据类型 常量名 = 常量值
（通常在变量定义前加关键字const，修饰该变量为常量，不可修改）*/
//#define 宏常量
#define Day 32
int main4(){
	
	cout << "一个月总共有:" << Day << "天" << endl;
	const int nian = 12;
	cout << "一年总共有：" << nian << "个月" << endl;
	system("pause");

	return 0;
}