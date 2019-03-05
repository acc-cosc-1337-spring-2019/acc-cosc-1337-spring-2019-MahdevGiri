#include"tic_tac_toe.h"
#include<string>
#include<vector>
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H
//Write class interface here
class TicTacToeManager
{
public:
	void save_game(const TicTacToe b);
	void display_history()const;


private:
	std::vector<TicTacToe> games;
	int x_win = 0;
	int o_win = 0;
	int ties = 0;

	void update_winner_count(string win_ner);

};

#endif // !TIC_TAC_TOE_MANAGER_H
