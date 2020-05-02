//h
#include "tic_tac_toe.h"
#include <iostream>
#include <fstream>

#ifndef TTT_DATA
#define TTT_DATA



class TicTacToeData
{

public:
	void save_pegs(const std::vector<string>& pgs);
	std::vector<std::unique_ptr<TicTacToe>> get_games();


private:
	const std::string file_name{ "TicTacToe.dat" };

};

#endif // !TTT_DATA