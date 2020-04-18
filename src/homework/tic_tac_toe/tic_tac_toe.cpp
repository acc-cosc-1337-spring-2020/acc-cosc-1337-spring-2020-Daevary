//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::cout;

bool TicTacToe::game_over()
{
	if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true)
	{
		set_winner();
		return true;
	}
	else if (check_board_full() == true)
	{
		winner = 'C';
		return true;
	}

	return false;
}


void TicTacToe::start_game(std::string first_player)
{
	if (!(first_player == "X" || first_player == "O"))
	{
		throw Error("Player must be X or O.");
	}

	player = first_player;
	clear_board();
}

void TicTacToe::mark_board(int position)
{
	if (position < 1 || position > pegs.size())
	{
		throw Error("Board 3: Position must be 1-9. Board 4: Postion must be 1-16");
	}

	if (player.empty()) 
	{
		throw Error("Game must start first.");
	}

	pegs[position - 1] = player;

	if (game_over() == false)
	{
		set_next_player();
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

bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < pegs.size(); ++i)
	{
		if (pegs[i] == " ")
		{
			return false;
		}
	}
	return true;
}

bool TicTacToe::check_column_win()
{

	return false;
}

bool TicTacToe::check_row_win()
{
	
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	
	return false;
}

void TicTacToe::set_winner()
{
	if (player == "X")
	{
		winner = 'X';
	}
	else
	{
		winner = 'O';
	}
}


void TicTacToe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}

std::ostream& operator<<(ostream& out, const TicTacToe& t) 
{
	if (t.pegs.size() == 9)
	{
		for (int i = 0; i < 9; i += 3)
		{
			out << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2] << "\n";
		}

	}
	else if (t.pegs.size() == 16)
	{
		for (int i = 0; i < 16; i += 4)
		{
			out << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2] << "|" << t.pegs[i + 3] << "\n";
		}
	}

	return out;
}


istream& operator>>(istream& in, TicTacToe& t)
{

	int position;
	cout << "Enter your position Player " << t.get_player() << ": ";
	in >> position;

	t.mark_board(position);
	return in;
}
