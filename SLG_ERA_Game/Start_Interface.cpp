#include "pch.h"
#include "Start_Interface.h"
#include<iostream>
using namespace std;


void Start_Interface::Game_Progress()
{
	
	cout << "这是一个魔禁同人恋爱养成游戏的黑框测试版本" << endl;
	cout << "内含轻微牛头人内容，若感到不适可以选择退出。" << endl;
	cout << "想要继续游戏吗(Y/N)？" << endl;
	char YES_OR_NO;
	do {
		cin >> YES_OR_NO;
		if (YES_OR_NO == 'N')
		{
			cout << "那么很遗憾了，此游戏将退出" << endl;
			system("pause");
			exit(0);
		}
		else if (YES_OR_NO == 'Y')
		{
			cout << "那么遵从你的意愿，游戏开始" << endl;
		}
		else {
			cout << "输入错误，请重新输入" << endl;
		}
	} while (YES_OR_NO != 'N'&&YES_OR_NO != 'Y');


}

Start_Interface::Start_Interface()
{
}


Start_Interface::~Start_Interface()
{
}
