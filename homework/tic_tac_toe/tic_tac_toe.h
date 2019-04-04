#include<string>
#include<vector>
#include<iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe 
{
public:
	TicTacToe(int size):
	 pegs( size*size," " )
	{}
	void start_game(std::string first_player);
	std::string get_player() const;
	bool game_over();
	void mark_board(int position);
	//void display_board() const;
	std::string get_winner() const;

	friend std::istream & operator >> (std::istream & in, TicTacToe & b);
	friend std::ostream & operator << (std::ostream & out, const TicTacToe & b1);
    

protected:
    std::vector <std::string> pegs;
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();
	


private:
	std::string next_player;
	std::string winner;

    void set_next_player();
	void clear_board();
	bool check_board_full();
	void set_winner();
	
	
};
#endif //!TIC_TAC_TOE_H