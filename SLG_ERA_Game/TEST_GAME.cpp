#include"pch.h"
#include"Start_Interface.h"
#include"Interface.h"

#include<iostream>
using namespace std;
int Game_Progress_Test()
{
	_Interface *interface;
	interface = new Start_Interface;
	interface->Game_Progress();
	system("pause");
	return 0;
}