#include<iostream>
using namespace std;

int main26() {

	//switch语句
	//给电影评分
	//10-9经典
	//8-7非常好
	//6-5一般
	//5以下烂片

	//1.提示用户输入评分
	cout << "请给749局电影进行评分 1-10分 超出视为烂片" << endl;
	//2.用户开始打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为:" << score << endl;
	//3.根据用户的评分，做出相应的评价
	switch (score) {
	case 10:
		cout << "您认为这部电影是经典" << endl;
		break; //退出当前分支
	case 9:
		cout << "您认为这部电影是经典" << endl;
		break;
	case 8:
		cout << "您认为这部电影是非常好" << endl;
		break;
	case 7:
		cout << "您认为这部电影是非常好" << endl;
		break;
	case 6:
		cout << "您认为这部电影是一般" << endl;
		break;
	case 5:
		cout << "您认为这部电影是一般" << endl;
		break;
	default:
		cout << "您认为这部电影是烂片" << endl;
		break;
	}
	//if和switch的区别
	//switch缺点，表达式的结果必须是整型或者字符型，不可以是一个区间
	//switch优点，结构清晰，执行效率高
	system("pause");

	return 0;
}