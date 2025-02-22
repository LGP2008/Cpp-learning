#include<iostream>
using namespace std;

int main15() {
	//取余运算本质就是除法取余数，取余运算符 % 只能用于整数
	int a1 = 10;
	int b1 = 3;

	cout << a1 % b1 << endl;

	int a2 = 10;
	int b2 = 20;

	cout << a2 % b2 << endl;
	//两个数相除，除数不可以为0所以也做不了取余运算
	int a3 = 10;
	int b3 = 0;
	//cout << a3 % b3 << endl;

	//两个小数是不可以做取余运算的

	/*double d1 = 3.14;
	double d2 = 1.1;
	cout << d1 % d2 << endl;*/
	system("pause");

		return 0;
}