#include "tic_tac_toe_manager.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
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

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game)
{
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
}

//void TicTacToeManager::display_history()const
//{
//	for (auto g : games)
//	{
//		 g.display_board();
//		 cout << "\n";
//    }
//	cout <<"X_wins: " << x_win<<"\n";
//	cout <<"O_wins: " << o_win << "\n";
//	cout <<"ties: " << ties << "\n";
	
//}

std::unique_ptr<TicTacToe> TicTacToeManager::get_game(int game_type)
{
	if (game_type == 3)
	{
		return std::make_unique<TicTacToe3>();
	}
	else
	{
		return std::make_unique<TicTacToe4>();
	}
}

const std::vector<std::unique_ptr<TicTacToe>>&TicTacToeManager::get_games()
{
	return games;
}

void TicTacToeManager::get_winner_totals(int & x, int & o, int & c)
{
	x = x_win;
	o = o_win;
	c = ties;
}


// to cout the object of type TicTacToeManager
std::ostream & operator << (std::ostream & out, const TicTacToeManager & m)
{
	for (auto &game : m.games)
	{
		
		out << *game << "\n";
	}
	out << "X_wins: " << m.x_win << "\n";
	out << "O_wins: " << m.o_win << "\n";
	out << "ties: " << m.ties << "\n";

	return out;
}
