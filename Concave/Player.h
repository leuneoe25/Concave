#pragma once
#include "Utility.h"
#include "ConsoleInput.h"

class Player
{
private:
	int MyValue;
	//ConsoleInput input;
public:
	Player();
	Player(int value);
	Position GetPosititon();
	int GetPlayerValue();
};