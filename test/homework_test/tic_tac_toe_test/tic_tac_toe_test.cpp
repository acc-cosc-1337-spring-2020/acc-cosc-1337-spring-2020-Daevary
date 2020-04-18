#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

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

	game.mark_board(1);//x
	game.mark_board(2);//o
	game.mark_board(5);//x
	game.mark_board(3);//o
	game.mark_board(6);//x
	game.mark_board(4);//o
	game.mark_board(7);//x
	game.mark_board(9);//o
	game.mark_board(8);//x
	REQUIRE(game.game_over() == true);
}

TEST_CASE("Test mark position accepts value from 1 to 9 only")
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE_THROWS_AS(game.mark_board(0), Error);
	REQUIRE_THROWS_AS(game.mark_board(10), Error);
	game.mark_board(5); 

}

TEST_CASE("Test win by first column, X wins")
{
	TicTacToeThree board;
	TicTacToe game;
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
	
	REQUIRE(game.get_winner() == "X");

}

/*TEST_CASE("Test mark position accepts value from 1 to 9 only")
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE_THROWS_AS(game.mark_board(0), Error);
	REQUIRE_THROWS_AS(game.mark_board(10), Error);
	game.mark_board(5);
	REQUIRE(game.game_over() == false);

}*/

TEST_CASE("Test win by second column, X Wins")
{
	TicTacToeThree board;
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
	// x wins
	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by third column, X wins")
{
	TicTacToeThree board;
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
	TicTacToeThree board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(1); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(4); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(2); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(3); // X

	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win by second row, X wins")
{
	TicTacToeThree board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(4); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(1); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(2); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // X

	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win by third row, X wins")
{
	TicTacToeThree board;
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
	board.mark_board(9); // X

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win diagonally from top left, x wins")
{
	TicTacToeThree board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(1); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(4); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(9); // X

	REQUIRE(board.game_over() == true);

}
TEST_CASE("Test win diagonally from top left")
{
	TicTacToeThree board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(1); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(4); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(9); // X

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test for no winner")
{
	TicTacToeThree board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(5); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(3); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(4); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(2); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(8); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(1); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(9); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(7); // X

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by first column, X wins, board 4")
{
	TicTacToeFour board;
	TicTacToe game;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(1); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(2); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(9); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(10); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(13); // X
	// X Wins
	REQUIRE(board.game_over() == true);

	REQUIRE(game.get_winner() == "X");

}


TEST_CASE("Test win by second column, X Wins, board 4")
{
	TicTacToeFour board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(2); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(3); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(7); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(10); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(11); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(14); // X
	// x wins
	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by third column, X wins, Board 4")
{
	TicTacToeFour board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(3); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(4); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(7); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(8); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(11); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(12); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(15); // X

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by fourth column, X wins, Board 4")
{
	TicTacToeFour board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(4); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(1); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(8); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(12); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(9); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(16); // X

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by first row, X wins, Board 4")
{
	TicTacToeFour board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(1); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(2); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(3); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(7); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(4); // X

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by second row, X wins, Board 4")
{
	TicTacToeFour board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(5); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(9); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(10); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(7); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(11); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(8); // X

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by third row, X wins, Board 4")
{
	TicTacToeFour board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(9); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(13); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(10); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(14); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(11); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(15); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(12); // X

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by fourth row, X wins, Board 4")
{
	TicTacToeFour board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(13); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(1); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(14); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(2); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(15); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(3); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(16); // X

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by diagonally from top left, X wins, Board 4")
{
	TicTacToeFour board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(1); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(8); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(11); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(9); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(16); // X

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by diagonally from top left, X wins, Board 4")
{
	TicTacToeFour board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(1); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(8); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(11); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(9); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(16); // X

	REQUIRE(board.game_over() == true);

}

TEST_CASE("Test win by diagonally from top right, X wins, Board 4")
{
	TicTacToeFour board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(4); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(7); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(8); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(10); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(9); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(13); // X

	REQUIRE(board.game_over() == true);

}


TEST_CASE("Test for no winner board 4")
{
	TicTacToeFour board;
	board.start_game("X");

	REQUIRE(board.game_over() == false);
	board.mark_board(1); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(2); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(3); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(4); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(5); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(6); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(7); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(8); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(10); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(9); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(12); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(11); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(13); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(14); // O
	REQUIRE(board.game_over() == false);
	board.mark_board(15); // X
	REQUIRE(board.game_over() == false);
	board.mark_board(16); // O


	REQUIRE(board.game_over() == true);

}