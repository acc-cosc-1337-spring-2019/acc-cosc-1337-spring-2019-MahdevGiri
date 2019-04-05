#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
int main() 
{
	std::unique_ptr<TicTacToeManager> manager = std::make_unique<TicTacToeManager>();
	char userChoice;
	do {
		int boardSize;
		std::cout << "Please enter '3' for TicTacToe3  and '4' for TicTacToe4 \n";
		cin >> boardSize;

		std::unique_ptr<TicTacToe>tic_tac_toe;
		//TicTacToe* board;

		/*if (boardSize == 3)
		{
		   board = new TicTacToe3();
		}
		else
		{
		 board = new TicTacToe4();
		}*/
	

		
		tic_tac_toe = manager->get_game(boardSize);
		tic_tac_toe->start_game("X");
		do
		{
			cout << *tic_tac_toe;
			cin >> *tic_tac_toe;

		} while (tic_tac_toe->game_over() == false);

		//manager.save_game(*board);
		manager->save_game(std::move(tic_tac_toe));
		cout << "\nWinner\n";
		//delete board;
		cout << "\nDo you want to play again? " << endl;
		cout << "Enter 'y' to play again or press any other key to exit and see RESULT " << endl;
		cin >> userChoice;
	} while (userChoice == 'y' || userChoice == 'Y');
	
	//manager.display_history();
	cout << "\nAll THE GAMES(WITH RESULTS) ARE LISTED HERE: \n";
	cout << *manager;
	cout << "Program has exited. Thank You.";

	cin.get();
	cin.ignore();
	return 0;
}
