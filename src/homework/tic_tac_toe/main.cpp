#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using std::cout; using std::cin;

int main()
{
	
	std::string choice;
	bool winner;
	TicTacToeManager manager;

	do
	{
		std::string first_player;
		TicTacToe game;
		while (!(first_player == "X" || first_player == "O"))
		{
			try
			{
				cout << "First player: X or O " << "\n";
				cin >> first_player;
				game.start_game(first_player);
			}
			catch (Error e)
			{
				cout << e.get_message() << "\n";
			}
		}

		while (game.game_over() == false)
		{
			try
			{
				cin >> game;
			}
			catch (Error e)
			{
				cout << e.get_message() << "\n";
			}

			cout << game;

		}
		manager.save_game(game);
		cout << "Winner: " << game.get_winner() << "\n";
		cout << "Would you like to continue: ";
		cin >> choice;

		
	} while (choice == "Y" || choice == "y");

	cout << manager;

	return 0;
}