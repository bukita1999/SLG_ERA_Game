#pragma once
#include<string>
using namespace std;
class Movement
{
	
public:

	bool Initiative_or_Not;
	Movement();
	~Movement();
	int Increase_Value();
	int Decrease_Value();
	string Name;
};

