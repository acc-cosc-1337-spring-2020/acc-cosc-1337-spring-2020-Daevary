//h

#include "tic_tac_toe.h"

#ifndef TTT_FOUR_H
#define TTT_FOUR_H

class TicTacToeFour : public TicTacToe
{
public:
	TicTacToeFour() : TicTacToe(4) {}

private:

	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

};
#endif // !TTT_FOUR_H
