#include <iostream>
#include <conio.h>
#include <stdlib.h>

#include "Common.h"
#include "Board.h"

using namespace std;

//extern variables
int y;
int x;
int main_board[HEIGHT][WIDTH]; //X, Y
int main_cpy[HEIGHT][WIDTH];
int mblock[4][4];

void displayTetrisRush() {
    std::cout << "\t\t\t ___________________  ________  ___  __  ________ __\n"
                 "\t\t\t/_  __/ __/_  __/ _ \\/  _/ __/ / _ \\/ / / / __/ // /\n"
                 "\t\t\t / / / _/  / / / , _// /_\\ \\  / , _/ /_/ /\\ \\/ _  / \n"
                 "\t\t\t/_/ /___/ /_/ /_/|_/___/___/ /_/|_/\\____/___/_//_/  \n\n\n\n";
}

int main() {
    displayTetrisRush();

	Board m;

	//initialize coordinates
	x = 4;
	y = 0;

	for (size_t i = 0; i < 4; i++) {
		for (size_t j = 0; j < 4; j++) {
			mblock[i][j] = m.POS_FREE;
		}
	}

	//start
	std::cout << "\t\t\t==================\n"
				"\t\t\tPress 1: Start Game\n"
				"\t\t\tPress Any: To Exit\n"
				"\t\t\t==================\n\t\t\t";

	int select_num = 0;
	cout<< ": ";
	std::cin >> select_num; //get input

	switch (select_num) {
	case 1:
		m.clear_screen(); //clear screen
		m.init_draw_main(); //initialize board

		//In C++ you are supposed to declare functions before you can use them.
		m.start(); //start game
		break;
	default:
		exit(0);
		break;
	}
}
