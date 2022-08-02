#include<iostream>
#include<ctime>
using namespace std;


void drawBoard();
void resetBoard();
void playerMakeMove();
void cpuMakeMove();
bool isDraw();
char hasWinner();


char board[3][3];

int main()
{   
    resetBoard();
    drawBoard();
    while(!isDraw()){
        playerMakeMove();
        if(hasWinner() != ' '){
            cout << "player using " << hasWinner() << " wins";
            break;
        }
        cpuMakeMove();
        if(hasWinner() != ' '){
            cout << "player using " << hasWinner() << " wins";
            break;
        }
    }
   
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
    while(board[x][y] != ' '){
        x = rand() % 3;
        y = rand() % 3;
    };
    board[x][y] = 'O';
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

char hasWinner () {
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2]){
        return board[0][0];
    }
    if(board[2][0] == board[1][1] && board[2][0] == board[0][2]){
        return board[2][0];
    }
    for(int i = 0; i < 3 ; i++){
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2]){
            return board[i][0];
        }
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i]){
            return board[0][i];
        }

    }
    return ' ';
}
