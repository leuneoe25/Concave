#include "GameField.h"
#include "Utility.h"

void GameField::ResetField()
{
	field = new int*[16];

	for (int i = 0; i < 16; i++)
	{
		field[i] = new int[16];
		for (int j = 0; j < 16; j++)
		{
			field[i][j] = 0;
		}
	}
}
bool GameField::SetField(Position pos,int value)
{
	if (field[pos.y][pos.x] == 0)
	{
		field[pos.y][pos.x] = value;
		return true;
	}
	else
		return false;
}
int** GameField::GetField()
{
	return field;
}