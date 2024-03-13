#include "ConsoleInput.h"
#include <iostream>
#include <string>
using namespace std;

Position ConsoleInput::GetInputPosition()
{
	string s;
	cin >> s;

	int x = (int)s[0] - 65;
	int y =  stoi(s.substr(1, s.size())) -1;
	return Position(x, y);
}