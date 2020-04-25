//cpp
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <memory>


using std::cout;

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe> &game)
{
	games.push_back(std::move(game));
	update_winner_ct(game->get_winner());

}


void TicTacToeManager::get_winner_total(int& o, int& x, int&t)
{
	o = o_win;
	x = x_win;
	t = ties;
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
	int x_win{ 0 }; int o_win{ 0 }; int ties{ 0 };
	
	for (auto &game : manager.games)
  	{
		if (game->get_winner() == "X")
		{
			x_win++;

		}
		else if (game->get_winner() == "O")
		{
			o_win++;
		}
		else
		{
			ties++;
		}

		/*out << "\n";
		out << game;
		
		std::string w = game->get_winner();
		out << "The Winner is: " << w << "\n";
		*/
	}

	out << "X wins: " << manager.x_win << "\n";
	out << "O wins: " << manager.o_win << "\n";
	out << "Ties: " << manager.ties << "\n";
	return out;
}