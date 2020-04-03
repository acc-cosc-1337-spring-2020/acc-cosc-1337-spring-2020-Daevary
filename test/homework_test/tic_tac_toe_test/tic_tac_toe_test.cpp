#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify TicTacToe mark board function")
{
	TicTacToe game;
	REQUIRE_THROWS_AS(game.mark_board(1), Error);
}

TEST_CASE("Verify TicTacToe start game function")
{
	TicTacToe game;
	REQUIRE_THROWS_AS(game.start_game("A"), Error);
}

TEST_CASE("Verify TicTacToe set first player function X")
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Verify TicTacToe set first player function O")
{
	TicTacToe game;
	game.start_game("O");

	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Verify TicTacToe test game flow O")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");

	game.mark_board(4);
	REQUIRE(game.get_player() == "O");

}

TEST_CASE("Verify TicTacToe test game flow X")
{
	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");

	game.mark_board(4);
	REQUIRE(game.get_player() == "X");

}

TEST_CASE("Test game ends when board is full")
{
	TicTacToe game;
	game.start_game("X");

	for (int i = 1; i < 6; ++i)
	{
		game.mark_board(i);
		REQUIRE(game.game_over() == false);
	}
	
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(8);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test mark position accepts value from 1 to 9 only")
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE_THROWS_AS(game.mark_board(0), Error);
	REQUIRE_THROWS_AS(game.mark_board(10), Error);
	//game.mark_board(5); //?

}

TEST_CASE("Test win by first column, X wins")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(1); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(2); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(4); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(7); // X
	// X Wins
	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test mark position accepts value from 1 to 9 only")
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE_THROWS_AS(game.mark_board(0), Error);
	REQUIRE_THROWS_AS(game.mark_board(10), Error);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);

}

TEST_CASE("Test win by second column, X Wins")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(2); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(3); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(8); // X
	
	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by third column, X wins")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(3); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(2); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(9); // X

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by first row, X wins")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(2); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(3); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(8); // X

	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win by second row, X wins")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(2); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(3); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(8); // X

	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win by third row, X wins")
{
	TicTacToe board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(7); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(1); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(8); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(2); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // X

	REQUIRE(board.game_over() == true);

}
