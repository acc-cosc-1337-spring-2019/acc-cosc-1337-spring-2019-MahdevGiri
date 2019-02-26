#include<string>
#include<vector>
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class TicTacToe 
{
public:
	void start_game(std::string first_player);
	std::string get_player() const;
	bool game_over();
	void mark_board(int position);
	void display_board() const;


private:
	std::vector <std::string> pegs {9," "};
	std::string next_player;
	
	// private functions
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
};