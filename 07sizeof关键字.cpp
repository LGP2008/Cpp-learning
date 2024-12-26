#include<iostream>
using namespace std;

int main() {

	//整型 short(2) int(4) long(4)    long long(8)
	//可以利用sizeof求出数据类型占用的内存大小
	//语法: sizeof( 数据类型 /变量)
	short num1 = 10;
	cout << "short类型占用内存大小为" << sizeof(num1) << endl;
	int num2 = 10;
	cout << "int类型占用内存大小为" << sizeof(num2) << endl;



	system("pause");

	return 0;
}