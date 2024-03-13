#pragma once
#include "Utility.h"

class GameField
{
private:
	int** field;
public:
	void ResetField();
	bool SetField(Position pos, int value);
	int** GetField();
};