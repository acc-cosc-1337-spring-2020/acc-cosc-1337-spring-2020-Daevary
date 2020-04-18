//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>


using std::cout;

void TicTacToeManager::save_game(TicTacToe b)
{
	games.push_back(b);
	update_winner_ct(b.get_winner());

}


void TicTacToeManager::get_winner_total(int& o, int& w, int&t)
{
	cout << "X wins: " << x_win << "\n";
	cout << "O wins: " << o_win << "\n";
	cout << "Ties: " << ties << "\n";
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

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	
	/*int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };*/

	for (auto game : manager.games)
  	{
		out << "\n";
		out << game;

		/*if (game.get().get_winner() == "X")
		{
			x_win++;
		}
		else if (game.get().get_winner() == "O")
		{
			o_win++;
		}
		else
		{
			ties++;
		}*/

		std::string w = game.get().get_winner();
		out << "The Winner is: " << w << "\n";


	}
	return out;
}