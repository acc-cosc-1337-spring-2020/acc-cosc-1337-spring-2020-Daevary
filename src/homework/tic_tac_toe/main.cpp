#include "tic_tac_toe.h"
#include <iostream>

using std::cout; using std::cin;

int main() 
{
	std::string first_player;
	std::string choice;

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

	do
	{
		try
		{
			int position;
			cout << "Mark the position(1-9) you would like to take: " << "\n";
			cin >> position;
			game.mark_board(position);
		}
		catch (Error e)
		{
			cout << e.get_message() << "\n";
		}

		cout << "to continue, press Y: ";
		cin >> choice;
	} while (choice == "Y" || choice == "y");

	return 0;
}