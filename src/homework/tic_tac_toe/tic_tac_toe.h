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
	void start_game(std::string first_player);
	void mark_board(int position);
	std::string const get_player() { return player; }

private:
	std::string player;
	void set_next_player();



};