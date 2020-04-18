//h

#include "tic_tac_toe.h"

class TicTacToeThree : public TicTacToe
{
public:
	//TicTacToeThree() = default;
	TicTacToeThree() : TicTacToe(3){}

private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

};