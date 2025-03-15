#include<iostream>
using namespace std;

int main21() {

	//选择结构，多行语句
	//输入分数，如果大于600，视为考上一本大学，输出，如果没考上打印未考上一本大学
	//如果没考上一本大学，打印未考上一本大学

	//1、输入分数
	int score = 0;
	cout << "请输入你的分数：" << endl;
	cin >> score;
	//2、提示用户输入的分数
	cout << "你输入的分数为：" << score << endl;
	//3.判断，如果大于，打印考上一本，否则打印未考上一本
	if (score > 600) {
		cout << "恭喜你考上了一本大学" << endl;
	}
	else {
		cout << "未考上一本大学，你已经很棒了哦摸摸头" << endl;
	}


	system("pause");

		return 0;


}