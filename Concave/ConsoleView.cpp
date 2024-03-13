#include "ConsoleView.h"
#include <iostream>

void ConsoleView::PrintScreen(int** field)
{
	int width = 65;
	int height = 1;
	for (int i = 0; i < 17; i++)
	{
		if (i != 0)
		{
			std::cout << height++ << " ";
			if(height <= 10)
				std::cout << " ";
		}
		for (int j = 0; j < 17; j++)
		{
			if(j==0 && i==0)
				std::cout << "0  ";
			else if (j != 0 && i == 0)
				std::cout << (char)width++ << " ";
			else if(i != 0 && j!=0)
				std::cout << field[i-1][j-1] << " ";
		}
		std::cout << std::endl;
	}
}