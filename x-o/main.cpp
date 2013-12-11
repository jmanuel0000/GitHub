#include<iostream>
#include<string>
#include<stdlib.h>
#include<time.h>

using namespace std;
int x,y,a,b,c;
int playerOne_win[4];
int playerTwo_win[4];
string ttt[3][3];
// THss will display the game situation ;P
void ticTacToe(){
	cout<<" _ _ _\n";
	for(a=0;a<3;a++){
		for (b=0;b<3;b++){
			cout<<"|"<<ttt[a][b];
		}
		cout<<"|\n";
	}
}

// This will handle and declare the winner
void check(){
	ticTacToe();
	for(a=0;a<3;a++){
		for(b=0;b<4;b++){
			playerOne_win[b]=0;
			playerTwo_win[b]=0;
		}
		for (b=0;b<3;b++){
			if(ttt[a][b]=="O"){
				playerOne_win[0]++;
			}
			if(ttt[b][a]=="O"){
				playerOne_win[1]++;
			}
			if(ttt[a][b]=="X"){
				playerTwo_win[0]++;
			}
			if(ttt[b][a]=="X"){
				playerTwo_win[1]++;
			}
		}
		b=0;
		for(c=2;c>=0;c--){

			if(ttt[c][c]=="O"){
				playerOne_win[2]++;
			}
			if(ttt[c][c]=="X"){
				playerTwo_win[2]++;
			}
			if(ttt[b][c]=="O"){
				playerOne_win[3]++;
			}
			if(ttt[b][c]=="X"){
				playerTwo_win[3]++;
			}
			b++;
		}
		for(b=0;b<4;b++){
			if(playerOne_win[b]==3){
				cout<<"\nCONGRATULATIONS!\nPlayer one won!";
				exit(EXIT_SUCCESS);
			}
			if(playerTwo_win[b]==3){
				cout<<"\nCONGRATULATIONS!\nPlayer two/Computer won!";
				exit(EXIT_SUCCESS);
			}
		}
	}

}
// This one handles player one
void player1(){
	check();
	cout<<endl;
	cout<<"\nPlayer one's turn: ";
	cin>>x>>y;

	if((ttt[x][y]=="X")||(ttt[x][y]=="O")){
		cout<<"\nIllegal move! you missed a turn.\n";
	}
	else{
		ttt[x][y]="O";
	}
}
// This one handles player two
void player2(){
	check();
	cout<<endl;
	cout<<"\nPlayer two's turn: ";
	cin>>x>>y;

	if((ttt[x][y]=="X")||(ttt[x][y]=="O")){
		cout<<"Illegal move! you missed a turn.\n";
	}
	else{
		ttt[x][y]="X";
	}
}
// this handles the computer
void ai(){
	int aiTerminator;
	aiTerminator=0;
	check();
	cout<<endl;
	cout<<"\nComputer's turn: ";

	while(aiTerminator==0){
		srand(time(NULL));
		x=rand() % 3+0;
		y=rand() % 3+0;

		if((ttt[x][y]=="X")||(ttt[x][y]=="O")){
			aiTerminator=0;
		}
		else{
			cout<<x<<" "<<y<<endl;
			ttt[x][y]="X";
			aiTerminator++;
		}
	}
}
//
int main(){
	char choice;
	for(a=0;a<3;a++){
		for(int b=0;b<3;b++){
			ttt[a][b]="_";
		}
	}
	cout<<"Play TiCtAcToE!\n\n";

	cout<<"Instruction: \n\n";
	for(int a=0;a<3;a++){
		cout<<"     ";
		for(int b=0;b<3;b++){
			cout<<"| "<<a<<" "<<b<<" ";
		}
		cout<<"|\n\n";
	}
	cout<<"NEW GAME!\n\n";
	cout<<"    A.) Play with a friend.\n";
	cout<<"    B.) Play against the computer.\n\n";

	cout<<"Your call! ";

	while(true){
		cin>>choice;
		switch(choice){
			case 'A':
				while(true){
					player1();
					player2();
				}
					break;
			case 'B':
				while(true){
					player1();
					ai();
				}
					break;
			default:
				cout<<"what? ";
				break;
		}
	}
	return 0;
}
