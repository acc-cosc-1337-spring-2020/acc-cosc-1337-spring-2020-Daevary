#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


//cpp

void TicTacToeData::save_pegs(const std::vector<string>& pgs)
{
	std::ofstream file_out(file_name, std::ios_base::trunc);

	for (auto pegs : pgs)
	{
		for (char p : pegs)
		{
			file_out << " ";
		}

		file_out << pegs.get_winner();
		file_out << "\n";
	}

	file_out.close();
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	std::unique_ptr<TicTacToe> board;
	std::ifstream open_file("TicTacToe.dat");

	while
}
