#include "Player.h"


Player::Player(int value)
{
	MyValue = value;
}
Player::Player() { }

Position Player::GetPosititon()
{
	return Position(0,0);
}

int Player::GetPlayerValue()
{
	return MyValue;
}
