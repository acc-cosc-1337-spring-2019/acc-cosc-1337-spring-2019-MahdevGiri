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

bool TicTacToe::check_column_win()
{
	for (std::size_t i = 0; i < 3; ++i)
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] &&
			pegs[i + 6] != " ")
		{
			return true;
		}
	}
	return false;
	
}

bool TicTacToe::check_row_win()
{
	
	for (std::size_t i = 0; i < 9; i += 3)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] &&
			pegs[i + 2] != " ")
		{
			return true;
		}
	}
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	
		if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] != " ")
		{
			return true;
		}
		else if (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[6] != " ")
		{
			return true;
		}
		else
		{
			return false;
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
		cout << b;
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
			if (count == 3)
			{
				out << "\n";
				count = 0;
			}
			
		}
	return out;
}