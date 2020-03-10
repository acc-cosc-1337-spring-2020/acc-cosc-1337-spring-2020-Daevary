//cpp
#include "tic_tac_toe.h"
#include <iostream>


void TicTacToe::start_game(std::string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		player = first_player;
	}
	else
	{
		throw Error("Player must be X or O.");
	}
}

void TicTacToe::mark_board(int position)
{
	if (!(position >= 1 && position <= 9))
	{
		throw Error("Position must be 1-9.");
	}

	if (player == "") 
	{
		throw Error("Must start game first.");
	}

	set_next_player();
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
