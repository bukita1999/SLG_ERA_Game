#include "pch.h"
#include "Start_Interface.h"
#include<iostream>
using namespace std;


void Start_Interface::Game_Progress()
{
	
	cout << "����һ��ħ��ͬ������������Ϸ�ĺڿ���԰汾" << endl;
	cout << "�ں���΢ţͷ�����ݣ����е����ʿ���ѡ���˳���" << endl;
	cout << "��Ҫ������Ϸ��(Y/N)��" << endl;
	char YES_OR_NO;
	do {
		cin >> YES_OR_NO;
		if (YES_OR_NO == 'N')
		{
			cout << "��ô���ź��ˣ�����Ϸ���˳�" << endl;
			system("pause");
			exit(0);
		}
		else if (YES_OR_NO == 'Y')
		{
			cout << "��ô��������Ը����Ϸ��ʼ" << endl;
		}
		else {
			cout << "�����������������" << endl;
		}
	} while (YES_OR_NO != 'N'&&YES_OR_NO != 'Y');


}

Start_Interface::Start_Interface()
{
}


Start_Interface::~Start_Interface()
{
}
