#include<iostream>
using namespace std;

int main22() {

	//选择结构，多条件if语句
	//输入考试分数，如果大于600分，输出考上一本大学
	//如果大于500分，输出考上二本大学
	//如果大于400分，输出考上三本大学
	//小于等于400分，输出未考上本科

	//1、用户输入考试分数
	int score = 0;
	cout << "请输入考试分数：" << endl;
	cin >> score;
	//2、提示用户输入考试分数
	cout << "您输入的分数为：" << score << endl;
	//3.判断
	//如果大于600分，输出考上一本大学
	//如果大于500分，输出考上二本大学
	//如果大于400分，输出考上三本大学
	//小于等于400分，输出未考上本科
	if (score > 600) {
		cout << "恭喜您，考上一本大学" << endl;
	}
	else if (score > 500) {
		cout << "恭喜你考上二本大学" << endl;
	}
	else if (score > 400) {
		cout << "恭喜你考上三本大学" << endl;
	}
	else {
		cout << "未考上本科" << endl;
	}
	system("pause");

	return 0;

}