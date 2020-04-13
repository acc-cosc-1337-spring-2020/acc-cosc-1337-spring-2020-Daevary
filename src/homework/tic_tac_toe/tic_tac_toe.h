//h
#include <string>
#include<vector>
#include <iostream>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H




using std::string; using std::cout; using std::cin; using std::ostream; using std::istream;

class Error
{
public: 
	Error(std::string msg) : message{ msg } {} 
	std::string get_message() const { return message; }

private:
	std::string message;

};

class TicTacToe
{
public: 
	bool game_over();
	void start_game(std::string first_player);
	void mark_board(int position);
	std::string get_player() const { return player; }
	void display_board() const;
	std::string get_winner() { return winner; }
	friend ostream& operator<<(ostream& out, const TicTacToe& t);
	friend istream& operator>>(istream& in, TicTacToe& t);

private:
	void set_next_player();
	bool check_board_full();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void set_winner();
	void clear_board();
	std::string player;
	std::string winner;
	std::vector<std::string> pegs{ 9, " " };

};

#endif // !TIC_TAC_TOE_H