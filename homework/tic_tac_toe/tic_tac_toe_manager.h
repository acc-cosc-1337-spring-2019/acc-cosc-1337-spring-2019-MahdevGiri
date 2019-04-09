#include"tic_tac_toe.h"
#include<string>
#include<vector>
#include<iostream>
#include<memory>
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
	void save_game(std::unique_ptr<TicTacToe>& game);
	std::unique_ptr<TicTacToe>get_game(int game_type);

	const std::vector<std::unique_ptr<TicTacToe>>& TicTacToeManager::get_games();

	void get_winner_totals(int& x, int& o, int& c);
	/*void display_history()const;*/
	friend std::ostream & operator << (std::ostream & out, const TicTacToeManager & m);


private:
	std::vector<std::unique_ptr<TicTacToe>> games;
	int x_win = 0;
	int o_win = 0;
	int ties = 0;

	void update_winner_count(string win_ner);

};

#endif // !TIC_TAC_TOE_MANAGER_H
