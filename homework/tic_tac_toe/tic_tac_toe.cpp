#include "tic_tac_toe.h"

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
	if (check_column_win())
	{
		return true;
	}
	else if (check_row_win())
	{
		return true;
	}
	else if (check_diagonal_win())
	{
		return true;
	}
	else if (check_board_full())
	{
		return true;
	}
	else
		return false;
}

void TicTacToe:: mark_board(int position)
{
	pegs[position-1] = next_player;
	set_next_player();
	
}
void TicTacToe:: display_board() const
{
	int count = 0;
	for (int i = 0; i < pegs.size(); ++i)
	{
		cout<<pegs[i]<<" | ";
		count++;
		if (count == 3)
		{
			cout << "\n";
			count = 0;
		}
		
	}
	
}

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
	
	if (pegs[0] =="X" && pegs[3]=="X" && pegs[6] == "X")
	{
		cout << "\nWinner is X "<<endl;
		cout << "Win by colomn 1 ";
		return true;
		
	}
	else if (pegs[1] =="X" && pegs[4]=="X" && pegs[7] == "X")
	{
		cout << "\nWinner is X "<<endl ;
		cout << "Win by colomn 2 ";
		return true;
	}
	else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
	{
		cout << "\nWinner is X" << endl;
		cout << "Win by colomn 3 ";
		return true;
	}
	if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
	{
		cout << "\nWinner is O" << endl;
		cout << "Win by colomn 1 ";
		return true;

	}
	else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
	{
		cout << "\nWinner is O" << endl;
		cout << "Win by colomn 2 ";
		return true;
	}
	else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
	{
		cout << "\nWinner is O" << endl;
		cout << "Win by colomn 3 ";
		return true;
	}
	else
		return false;
}

bool TicTacToe::check_row_win()
{
	if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
	{
		cout << "\nWinner is X" << endl;
		cout << "Win by row 1 ";
		return true;

	}
	else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
	{
		cout << "\nWinner is X" << endl;
		cout << "Win by row 2 ";
		return true;
	}
	else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
	{
		cout << "\nWinner is X" << endl;
		cout << "Win by row 3 ";
		return true;
	}
	if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
	{
		cout << "\nWinner is O" << endl;
		cout << "Win by row 1 ";
		return true;

	}
	else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
	{
		cout << "\nWinner is O" << endl;
		cout << "Win by row 2 ";
		return true;
	}
	else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
	{
		cout << "\nWinner is O" << endl;
		cout << "Win by row 3 ";
		return true;
	}
	else
		return false;
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
	{
		cout << "\nWinner is X" << endl;
		cout << "Win by diagnol from top left ";
		return true;

	}
	else if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
	{
		cout << "\nWinner is X" << endl;
		cout << "Win by diagnol from bottom left ";
		return true;
	}
	
	if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
	{
		cout << "\nWinner is O" << endl;
		cout << "Win by diagnol from top left ";
		return true;

	}
	else if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
	{
		cout << "\nWinner is O" << endl;
		cout << "Win by diagnol from bottom left ";
		return true;
	}
	
	else
		return false;
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