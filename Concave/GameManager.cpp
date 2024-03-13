#include "GameManager.h"
#include <Windows.h>

GameManager::GameManager(Player player_1, Player player_2, GameField _field, ConsoleInput _input, ConsoleView _view)
{
	first_player = player_1;
	second_player = player_2;
	field = _field;
	input = _input;
	view = _view;
	Trun = 0;
}
void GameManager::Run()
{
	while (true)
	{
		Player player = GetPlayer();

		view.PrintScreen(field.GetField());

		Position pos = input.GetInputPosition();

		field.SetField(pos, player.GetPlayerValue());

		TurnEnd();
	}
}

Player GameManager::GetPlayer()
{
	if (Trun % 2 == 1)
		return first_player;
	else
		return second_player;
}

void GameManager::TurnEnd()
{
	Trun++;
	system("cls");
}

