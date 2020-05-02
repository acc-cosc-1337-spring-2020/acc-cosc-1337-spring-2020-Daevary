//h

#include "tic_tac_toe.h"

#ifndef TTT_FOUR_H
#define TTT_FOUR_H

class TicTacToeFour : public TicTacToe
{
public:
	TicTacToeFour(std::vector<string> p, string winner){}
	TicTacToeFour() : TicTacToe(4) {}

private:

	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

	//std::vector<std::string> pegs{};
	//std::string winner;

};
#endif // !TTT_FOUR_H
