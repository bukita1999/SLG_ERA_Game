#pragma once
class Static
{
public:
	Static();
	~Static();
	int & GetValue();
	
protected:
	int Value;
};

