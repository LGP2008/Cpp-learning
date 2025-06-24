#include<iostream>
using namespace std;
int main33() {


	//使用嵌套循环打印星图

	//打印一行星图
	//外层循环
	//外层循环一次内层循环一周
	for (int i = 0; i < 10; i++)
	{
		//内层循环
		for (int o = 0; o < 10; o++)
		{
			cout << "*";
		}
		cout << endl;



	}
	system("pause");

		return 0;
}