#include "tic_tac_toe.h"

int main() 
{
	char userChoice;
	do {
		int position = 0;
		TicTacToe board;
		board.start_game("X");
		do
		{
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
			}

		} while (board.game_over() == false);
		cout << "winner\n";
		cout << "\nDo you want to play again? " << endl;
		cout << "Enter 'y' to play again or press any other key to exit " << endl;
		cin >> userChoice;
	} while (userChoice == 'y' || userChoice == 'Y');
	
	cout << "Program has exited. Thank You.";

	cin.get();
	cin.ignore();
	return 0;
}
