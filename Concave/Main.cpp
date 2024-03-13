#include <iostream>
#include "GameManager.h"
using namespace std;


int main()
{
	GameField gameField;
	gameField.ResetField();

	ConsoleInput input;
	ConsoleView view;

	GameManager gameManager(Player(1),Player(2), gameField, input, view);

	gameManager.Run();
}