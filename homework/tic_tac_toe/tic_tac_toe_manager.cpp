#include "tic_tac_toe_manager.h"
//Write class function implementations here
void TicTacToeManager::update_winner_count(string win_ner)
{
	if (win_ner == "X")
	{
		x_win++;
	}
	else if (win_ner == "O")
	{
		o_win++;
	}
	else
	{
		ties++;
	}
}

void TicTacToeManager::save_game(const TicTacToe b) 
{
	games.push_back(b);
	update_winner_count(b.get_winner());
}

void TicTacToeManager::display_history()const
{
	for (auto g : games)
	{
		 g.display_board();
		 cout << "\n";
    }
	cout <<"X_wins: " << x_win<<"\n";
	cout <<"O_wins: " << o_win << "\n";
	cout <<"ties: " << ties << "\n";
	
}

