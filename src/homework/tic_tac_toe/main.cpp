#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using std::cout; using std::cin;

int main()
{
	std::string first_player;
	std::string choice;

	TicTacToeManager manager;
	
	bool winner;

	do
	{
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
					int position;
					cout << "Mark the position(1-9) you would like to take: " << "\n";

					cin >> position;
					game.mark_board(position);
					std::cout << game;

					//game.display_board();


				}
				catch (Error e)
				{
					cout << e.get_message() << "\n";
				}
					
					
			}

				cout << "Winner: " << game.get_winner() << "\n";

				manager.save_game(game);

			cout << "Would you like to play another game?: ";
			cin >> choice;

		
	} while (choice == "Y" || choice == "y");

	//display winner totals
	//display history



	return 0;
}