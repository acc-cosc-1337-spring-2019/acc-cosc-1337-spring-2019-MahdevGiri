#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
int main() 
{
	TicTacToeManager manager;
	char userChoice;
	do {
		int boardSize;
		std::cout << "Please enter '3' for TicTacToe3  and '4' for TicTacToe4 \n";
		cin >> boardSize;

		TicTacToe* board;

		if (boardSize == 3)
		{
		   board = new TicTacToe3();
		}
		else
		{
		 board = new TicTacToe4();
		}
	

		board->start_game("X");
		do
		{
			// commented for future if needed
			/*int position = 0;
			cout << "Enter the position for X: " << endl;
			cin >> position;
			board.mark_board(position);
			board.display_board();
			
			if (board.game_over() == false)

			{
				cout << "Enter the position for O: " << endl;
				cin >> position;
				board.mark_board(position);
				board.display_board();
			}*/

			cout<< *board;
			cin >> *board;

		} while (board->game_over() == false);

		manager.save_game(*board);

		delete board;
		cout << "\nDo you want to play again? " << endl;
		cout << "Enter 'y' to play again or press any other key to exit and see RESULT " << endl;
		cin >> userChoice;
	} while (userChoice == 'y' || userChoice == 'Y');
	
	//manager.display_history();
	cout << "\nAll THE GAMES(WITH RESULTS) ARE LISTED HERE: \n";
	cout << manager;
	cout << "Program has exited. Thank You.";

	cin.get();
	cin.ignore();
	return 0;
}
