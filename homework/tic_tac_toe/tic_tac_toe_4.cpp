//cpp
#include"tic_tac_toe_4.h"

TicTacToe4::TicTacToe4(std::vector<std::string> p) : TicTacToe(4)  //
{
	 determine_winner();
}
bool TicTacToe4::check_column_win()
{
	for (std::size_t i = 0; i < 4; ++i)
	{
		if (pegs[i] == pegs[i + 4] && pegs[i + 4] == pegs[i + 8] && pegs[i + 8] == pegs[i + 12]&&
			pegs[i + 12] != " ")
		{
			return true;
		}
	}
	return false;
}

bool TicTacToe4::check_row_win()
{
	for (std::size_t i = 0; i < 16; i += 4)
	{
		if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i + 2] == pegs[i + 3]&&
			pegs[i + 3] != " ")
		{
			return true;
		}
	}
	return false;

}

bool TicTacToe4::check_diagonal_win()
{
	if (pegs[0] == pegs[5] && pegs[5] == pegs[10] && pegs[10] == pegs[15] && pegs[15] != " ")
	{
		return true;
	}
	else if (pegs[3] == pegs[6] && pegs[6] == pegs[9] && pegs[9] == pegs[12] && pegs[12] != " ")
	{
		return true;
	}
	else
	{
		return false;
	}

}