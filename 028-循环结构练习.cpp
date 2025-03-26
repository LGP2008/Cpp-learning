#include<iostream>
using namespace std;

int main28() {
	//添加一个随机数种子，作用利用当前时间作为随机数种子，使得每次运行程序生成的随机数不同
	srand((unsigned int)time(NULL));

//1.生成一个随机数
	int num = rand() % 100 + 1; //生成0-99的随机数
	cout << "输入你猜测的数字" << endl;
	//2.玩家进行猜测
	int val = 0;//玩家猜测的数字
	while (1) {
		cin >> val;


		//3.判断玩家猜测的数字是否正确
		if (val > num) {
			cout << "猜大了" << endl;
		}
		else if (val < num) {
			cout << "猜小了" << endl;
		}
		else {
			cout << "猜对了" << endl;
			break;//break在循环中，可以利用break跳出循环
		}
		
		
	}


	
	//猜对 退错
	//猜错 继续猜返回第二步
	system("pause");

	return 0;
}