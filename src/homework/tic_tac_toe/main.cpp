#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>

using std::cout; using std::cin;

int main()
{
	
	std::string choice;	
	TicTacToeManager manager;
	
	
	do
	{
		bool winner;
		int player;
		std::string first_player;
		//TicTacToe game;
		int x;
		int o;
		int t;

		std::vector<std::reference_wrapper<TicTacToe>> games;

		cout << "Enter 3 or 4 to start the game: ";
		cin >> player;

		if (player == 3)
		{
			TicTacToeThree three;
			games.push_back(three);

			while (!(first_player == "X" || first_player == "O"))
			{
				try
				{
					cout << "First player: X or O " << "\n";
					cin >> first_player;
					three.start_game(first_player);
				}
				catch (Error e)
				{
					cout << e.get_message() << "\n";
				}
			}

			do
			{
				cin >> three;
				cout << three;
				winner = three.game_over();

			} while (winner == false);

			manager.save_game(three);
			cout << "\n";
			cout << three;
			manager.get_winner_total(x, o, t);
			cout << "The winner is: " << three.get_winner() << "\n";
			
		}

		else if (player == 4)
		{
			TicTacToeFour four;
			games.push_back(four);

			while (!(first_player == "X" || first_player == "O"))
			{
				try
				{
					cout << "First player: X or O " << "\n";
					cin >> first_player;
					four.start_game(first_player);
				}
				catch (Error e)
				{
					cout << e.get_message() << "\n";
				}
			}
			do
			{
				cin >> four;
				cout << four;
				winner = four.game_over();

			} while (winner == false);

			manager.save_game(four);
			cout << "\n";
			cout << four;
			manager.get_winner_total(x, o, t);
			cout << "The winner is: " << four.get_winner() << "\n";
		}

		
		cout << "Would you like to play another game?: ";
		cin >> choice;

		
	} while (choice == "Y" || choice == "y");

	cout << manager; 

	return 0;
}