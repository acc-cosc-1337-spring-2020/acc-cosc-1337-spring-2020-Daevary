#include "tic_tac_toe.h"
#include <iostream>

using std::cout; using std::cin;

int main()
{
	std::string first_player;
	std::string choice;

	TicTacToe game;
	bool winner;

	do
	{
		do
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

			do
			{
				try
				{
					while (game.game_over() == false)
					{
						int position;
						cout << "Mark the position(1-9) you would like to take: " << "\n";
						cin >> position;
						game.mark_board(position);
						game.display_board();
						winner = game.game_over();
					}

				}
				catch (Error e)
				{
					cout << e.get_message() << "\n";
				} 
				cout << "Winner: " << game.get_winner() << "\n";
			} while (winner == false);

			cout << "Would you like to continue: ";
			cin >> choice;

		} while (!(first_player == "X" || first_player == "O")); 

		
	} while (choice == "Y" || choice == "y");
	return 0;
}