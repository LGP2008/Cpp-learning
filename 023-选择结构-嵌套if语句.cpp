#include<iostream>
using namespace std;

int main23() {
	/*提示用户输入高考分数，根据分数进行判断
	分数大于600分上一本，大于500上二本，大于400上三本，其余视为未考上本科
	在一本分数线中，如果大于700上北大，大于650上清华，大于600入人大*/
	//1.提示用户输入分数
	int score = 0;
	cout << "输入你的高考分数：" << endl;
	cin >> score;
	//2.显示用户输入的分数
	cout << "你输入的分数是：" << score << endl;
	//3.判断
	if (score > 600) {
		cout << "恭喜你考上一本大学" << endl;
		if (score > 700) {
			cout << "恭喜你考上了北京大学" << endl;
		}
		else if (score > 650) {
			cout << "恭喜你考上了清华大学" << endl;
		}
		else if (score > 600) {
			cout << "恭喜你考上了人民大学" << endl;
		}
	}
	else if (score > 500) {
		cout << "恭喜你考上了二本大学" << endl;
	}
	else if (score > 400) {
		cout << "恭喜你考上了三本大学" << endl;
	}
	else {
		cout << "未考上本科" << endl;
	}

	system("pause");

	return 0;


}