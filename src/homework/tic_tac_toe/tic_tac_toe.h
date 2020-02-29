//h
#include <string>

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
	void start_game(string first_player);
	void mark_board(int position);
	std::string get_player() const { return next_player; }

private:
	void set_next_player();



};