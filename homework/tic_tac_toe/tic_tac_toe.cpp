#include "tic_tac_toe.h"
#include<iostream>

void TicTacToe::start_game(std::string first_player)
{
	next_player = first_player;
	TicTacToe::clear_board();
}

std::string TicTacToe::get_player() const
{
	return next_player;
}

bool TicTacToe:: game_over()
{
	if (check_column_win()|| check_row_win()|| check_diagonal_win()|| check_board_full())
	{
		return true;
	}
	else
		return false;
}

void TicTacToe:: mark_board(int position)
{
	pegs[position-1] = next_player;
	if (game_over()) {
		set_winner();
		
	}
	else
	{
		set_next_player();  // to get the next player
	}
}
//void TicTacToe:: display_board() const
//{
//	int count = 0;
//	for (int i = 0; i < pegs.size(); ++i)
//	{
//		cout<<pegs[i]<<" | ";
//		count++;
//		if (count == 3)
//		{
//			cout << "\n";
//			count = 0;
//		}
//		
//	}
//	
//}

// all the private functions are below
void TicTacToe::set_next_player()
{
	if (next_player == "X")
	{
		next_player = "O";
	}
	else
	{
		next_player = "X";
	}
}



void TicTacToe:: clear_board()
{
	for (int i = 0; i < pegs.size(); ++i)
	{
		pegs[i] = " ";
	}
}

bool TicTacToe:: check_board_full()
{
	bool board_full = true;
	for (int i = 0; i < pegs.size(); ++i)
	{
		
		if (pegs[i] == " ")
		{
			board_full = false;
		}
		
	}
	return board_full;
}

void TicTacToe::set_winner()
{
	if (check_board_full())
	{
		winner = "C";
	}
	else
	{
		winner = next_player;
	}

}

string TicTacToe::get_winner()const
{
	
	return winner;
}
const std::vector<std::string>& TicTacToe::get_pegs()
{
	return pegs;
}
 // to cin the object of type TicTacToe if called
std::istream & operator>>(std::istream & in, TicTacToe & b)
{
	int position;
	cout << "Enter the position for X: " << endl;
	in >> position;
	b.mark_board(position);
	cout << b;
	if (b.game_over() == false)

	{
		cout << "Enter the position for O: " << endl;
		in >> position;
		b.mark_board(position);
		//cout << b;
	}
	return in;
}


// to cout the object of type TicTacToe if called
std::ostream & operator <<(std::ostream & out,const TicTacToe & b1)
{
	int count = 0;
		for (int i = 0; i < b1.pegs.size(); ++i)
		{
			out<<b1.pegs[i]<<" | ";
			count++;
			if (b1.pegs.size() == 9)
			{
				if (count == 3)
				{
					out << "\n";
					count = 0;
				}
			}
			else
			{
				if (count == 4)
				{
					out << "\n";
					count = 0;
				}

			}
			
		}
	return out;
}

void TicTacToe::determine_winner()  //
{
	if (check_board_full() == true)
	{
		winner = "C";
	}
	else
	{
		int x = 0;
		int o = 0;
		for (auto s : pegs)
		{
			if (s == "X")
			{
				x++;
			}
			else if(s == "O")
			{
				o++;
			}

		}
		if (x > o)
		{
			winner = "X";
		}
		else
		{
			winner = "O";
		}

	}
}