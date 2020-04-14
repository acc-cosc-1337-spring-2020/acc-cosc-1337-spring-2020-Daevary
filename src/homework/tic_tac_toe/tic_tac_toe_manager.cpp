//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>


using std::cout;

void TicTacToeManager::save_game(const TicTacToe b)
{
	games.push_back(b);
	update_winner_ct(b.get_winner());

}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	for (auto games : manager.games)
	{
		out << "X wins: " << manager.x_win << "\n";
		out << "O wins: " << manager.o_win << "\n";
		out << "Ties: " << manager.ties << "\n";
	}
	return out;
}

void get_winner_total(int& o, int& w, int&t)
{

}

void TicTacToeManager::update_winner_ct(std::string winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else
	{
		ties++;
	}
}