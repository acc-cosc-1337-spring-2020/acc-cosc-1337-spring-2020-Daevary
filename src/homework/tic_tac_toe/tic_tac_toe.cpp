//cpp
#include "tic_tac_toe.h"
#include <iostream>
#include<vectors>

void TicTacToe::start_game(std::string first_player)
{
	if (first_player == "X", "O")
	{
		first_player = player;
	}
	else
	{
		throw Error("Player must be X or O.");
	}

	set_next_player();
}

void TicTacToe::mark_board(int position)
{
	if (position >= 1 && position <= 9)
	{
		throw Error("Position must be 1-9.");
	}
}


void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		player = "O";
	}
	else
	{
		player = "X";
	}
}
