#include<iostream>
using namespace std;

int main19 (){

	////逻辑运算符  非 !
	/*int a = 10;
	在c++中除了0都是真
	cout << !a << endl; */
	
	// 与   &&
	/*int a = 10;
	int b = 10;
	cout <<(a && b)<< endl;

	a = 0;
	b = 10;
	cout << (a && b) << endl;

	a = 0;
	b = 0;
	cout << (a && b) << endl;*/


	// 或
	int a = 10;
	int b = 10;

	cout << (a || b) << endl;

	a = 0;
	b = 10;

	cout << (a || b) << endl;

	a = 0;
	b = 0;
	cout << (a || b) << endl;
	system("pause");


	return 0;


}