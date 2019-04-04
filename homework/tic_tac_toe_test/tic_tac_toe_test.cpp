#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include<string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test the game_over function for TicTacToe3")
{
	TicTacToe *board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X and X wins
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test first player X for TicTacToe3")
{
	TicTacToe tic_tac_toe(3);
	tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.get_player() == "X");

	tic_tac_toe.start_game("O");
	REQUIRE(tic_tac_toe.get_player() == "O");
}

TEST_CASE("Test win by first column for TicTacToe3")
{
	TicTacToe *board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by 2nd column for TicTacToe3")
{
	TicTacToe *board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
	//X wins 
	REQUIRE(board->game_over() == true);

	delete board;
}
TEST_CASE("Test win by 3rd column for TicTacToe3")
{
	TicTacToe *board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	//X wins 
	REQUIRE(board->game_over() == true);

	delete board;
}

TEST_CASE("Test win by 1st row for TicTacToe3")
{
	TicTacToe *board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X 
	//X wins 
	REQUIRE(board->game_over() == true);

	delete board;
}
TEST_CASE("Test win by 2nd row  for TicTacToe3")
{
	TicTacToe *board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by 3rd row for TicTacToe3")
{
	TicTacToe *board= new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by diagnol(1) case for TicTacToe3")
{
	TicTacToe *board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	//X wins 
	REQUIRE(board->get_winner() == "X");

	delete board;
}

TEST_CASE("Test win by diagnol(2) case for TicTacToe3")
{
	TicTacToe *board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	//X wins 
	REQUIRE(board->get_winner() == "X");

	delete board;
}


TEST_CASE("Test for nobody win and board full for TicTacToe3")
{
	TicTacToe *board = new TicTacToe3();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
	// nobody wins and board is full 
	REQUIRE(board->get_winner() == "C");
	REQUIRE(board->game_over() == true);

	delete board;
}






// NEW TEST CASES FOR TIC_TAC_TOE_4


TEST_CASE("Test the game_over function for TicTacToe4")
{
	TicTacToe *board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(10); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X and X wins
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test first player X for TicTacToe4")
{
	TicTacToe tic_tac_toe(4);
	tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.get_player() == "X");

	tic_tac_toe.start_game("O");
	REQUIRE(tic_tac_toe.get_player() == "O");
}

TEST_CASE("Test win by 1st column for TicTacToe4")
{
	TicTacToe *board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(10); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X and X wins
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by 2nd column for TicTacToe4")
{
	TicTacToe *board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(10); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//X and X wins
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by 3rd column for TicTacToe4")
{
	TicTacToe *board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(8); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(12); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(15);//X and X wins
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by 4th column for TicTacToe4")
{
	TicTacToe *board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(8); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(12); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X and X wins
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by 1st row for TicTacToe4")
{
	TicTacToe *board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X and X wins
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by 2nd row for TicTacToe4")
{
	TicTacToe *board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(10); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X and X wins
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by 3rd row for TicTacToe4")
{
	TicTacToe *board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(13); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(10); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(14); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(15); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(12);//X and X wins
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by 4th row for TicTacToe4")
{
	TicTacToe *board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(13); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(14); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(10); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(15); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X and X wins
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by diagnol(1) for TicTacToe4")
{
	TicTacToe *board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(12); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X and X wins
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test win by diagnol(2) for TicTacToe4")
{
	TicTacToe *board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(9); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(7); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(10); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(12); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X and X wins
	REQUIRE(board->game_over() == true);
	delete board;
}

TEST_CASE("Test for nobody win and board full for TicTacToe4")
{
	TicTacToe *board = new TicTacToe4();
	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(2); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(3); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(4); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(6); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(5); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
    REQUIRE(board->game_over() == false);
	board->mark_board(7); //O
    REQUIRE(board->game_over() == false);
	board->mark_board(9); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(10); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(11); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(12); //O
    REQUIRE(board->game_over() == false);
	board->mark_board(13); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(14); //O
	REQUIRE(board->game_over() == false);
	board->mark_board(15); //X
	REQUIRE(board->game_over() == false);
	board->mark_board(16); //O
	

	// nobody wins and board is full 
	REQUIRE(board->get_winner() == "C");
	REQUIRE(board->game_over() == true);
	delete board;
}