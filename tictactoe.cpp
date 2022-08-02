#include<iostream>
using namespace std;


void drawBoard();
void playerMakeMove();
void cpusMakeMove();

int main()
{ 
    drawBoard();
    return 0;    
}

void drawBoard(){
    char board[3][3];
    cout<< "       |       |		 \n"; 
	cout<< "   " << board[0][0] << "   |   " << board[0][1] << "   |   " << board[0][2] << "	 \n"; 
	cout<< "       |       |		 \n"; 
	cout<< " - - - + - - - + - - -	 \n"; 
	cout<< "       |       |		 \n"; 
	cout<< "   " << board[1][0] << "   |   " << board[1][1] << "   |   " << board[1][2] << "	 \n"; 
	cout<< "       |       |		 \n"; 
	cout<< " - - - + - - - + - - -	 \n"; 
	cout<< "       |       |		 \n"; 
	cout<< "   " << board[2][0] << "   |   " << board[2][1] << "   |   " << board[2][2] << "	 \n"; 
	cout<< "       |       |		 \n"; 
}

void playerMakeMove(){
    int x, y;
    cout << "Place at column";
    
}

