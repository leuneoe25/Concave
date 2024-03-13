#pragma once
#include "ConsoleView.h"
#include "ConsoleInput.h"
#include "Player.h"
#include "Utility.h"
#include "GameField.h"

class GameManager
{
private:
	Player first_player;
	Player second_player;

	ConsoleInput input;
	ConsoleView view;

	GameField field;

	int Trun;
public:
	GameManager(Player player_1,Player player_2, GameField field,ConsoleInput input,ConsoleView view);

	void Run();
	Player GetPlayer();
	void TurnEnd();
};