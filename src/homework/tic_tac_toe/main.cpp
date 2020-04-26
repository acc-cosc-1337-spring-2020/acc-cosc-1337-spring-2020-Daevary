#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <vector>
#include <memory>

using std::cout; using std::cin; using std::string; using std::unique_ptr; using std::make_unique;

int main()
{
	string choice;	
	//TicTacToeManager manager;
	unique_ptr<TicTacToeManager> manager = make_unique<TicTacToeManager>();
	
	do
	{
		
		int game_type;
		cout << "\nTicTacToe 3 or 4?: ";
		cin >> game_type;
		//TicTacToeThree game3;
		//TicTacToeFour game4;
		unique_ptr<TicTacToe> game;
		
		bool winner;

		if (game_type == 3)
		{
			game = make_unique<TicTacToeThree>();
			
		}
		else if (game_type == 4)
		{
			game = make_unique<TicTacToeFour>();
		}

		string player = "Y";

		while (!(player == "X" || player == "O"))
		{
			try
			{
				cout << "First Player, X or O: ";
				cin >> player;

				game->start_game(player);

			}
			catch (Error e)
			{
				cout << e.get_message() << "\n";
			}
			do
			{
				cin >> *game;
				cout << *game;
				//winner = game->game_over();

			} while (game->game_over() == false);

		}

		

		cout << "The winner is: " << game->get_winner() << "\n";

		manager->save_game(game);
		cout << "\n";
		
		

		cout << "Game Over\n" << "\nWould you like to play another game?: ";
		cin >> choice;

		
	} while (choice == "Y" || choice == "y");

	cout << *manager; 

	return 0;
}