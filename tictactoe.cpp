#include<iostream>
#include<ctime>
using namespace std;


void drawBoard();
void resetBoard();
void playerMakeMove();
void cpuMakeMove();
bool isDraw();
void hasWinner();


char board[3][3];

int main()
{   
    resetBoard(); 
    drawBoard();
    playerMakeMove();
    cpuMakeMove();
    return 0;    
}

void drawBoard(){
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

void resetBoard(){
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
        
    }
}
void playerMakeMove(){
    int x, y;
    cout << "Place at row ...";
    cin >> x;
    cout << "Place at column ... ";
    cin >> y;

    if(board[x][y] == ' '){
        board[x][y] = 'X';
    }
    drawBoard();
    
}
void cpuMakeMove(){
    srand(time(NULL));
    int x, y;
    x = rand() % 3;
    y = rand() % 3;

    do{
        if(board[x][y] == ' '){
            board[x][y] = 'O';
            break;
        }
        x = rand() % 3;
        y = rand() % 3;
    }
    while(board[x][y] != ' ');
    drawBoard();
}
bool isDraw () {
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(board[i][j] == ' '){
                return false;
            }
        }
    }
    return true;
}

void hasWinner () {
    
}
