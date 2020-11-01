#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
bool draw=false;
char board[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
int row,column;
void display_Board()
{
    system("cls");
    cout<<"\n\n\t\t TIC---TAC---TOE \t\t\n\n";
    cout<<"\t\t   PLAYER1 [X]\n";
    cout<<"\t\t   PLAYER2 [O]\n\n";
    cout<<"\t\t    |    |    "<<endl;
    cout<<"\t\t  "<<board[0][0]<<" |  "<<board[0][1]<<" | "<<board[0][2]  <<endl;
    cout<<"\t\t    |    |    "<<endl;
    cout<<"\t\t---- ---- ----"<<endl;
    cout<<"\t\t    |    |    "<<endl;
    cout<<"\t\t "<<board[1][0]<<"  | "<<board[1][1]<<"  | "<<board[1][2]  <<endl;
    cout<<"\t\t    |    |    "<<endl;
    cout<<"\t\t---- ---- ----"<<endl;
    cout<<"\t\t    |    |    "<<endl;
    cout<<"\t\t  "<<board[2][0]<<" | "<<board[2][1]<<"  | "<<board[2][2]  <<endl;
    cout<<"\t\t    |    |    "<<endl;

}
void turn_player()
{
    int choice;

    if(turn=='X')
    {
        cout<<"\n\t Turn player1 [X]: ";
    }
    if(turn=='O')
    {
        cout<<"\n\t Turn player2 [O]: ";
    }

    cin>>choice;

    switch(choice)
    {
    case 1: row=0;column=0;break;
    case 2: row=0;column=1;break;
    case 3: row=0;column=2;break;
    case 4: row=1;column=0;break;
    case 5: row=1;column=1;break;
    case 6: row=1;column=2;break;
    case 7: row=2;column=0;break;
    case 8: row=2;column=1;break;
    case 9: row=2;column=2;break;
    default:
        cout<<"\n\t\tINVALID CHOICE\n"<<endl;
        break;
    }
    if(turn=='X'&& board[row][column]!='X' && board[row][column]!='O')
    {
        board[row][column] ='X';
        turn='O';
    }
    else if(turn=='O'&& board[row][column]!='X' && board[row][column]!='O')
    {
        board[row][column]='O';
        turn='X';
    }
    else
    {
      cout<<"\n\t\t BOX ALREADY FILLED \n\n\t\t PLEASE TRY AGAIN\n"<<endl;
      turn_player();
    }
  display_Board();

}
bool gameover()
{
    for(int i=0;i<3;i++)
    if(board[i][0]==board[i][1] && board[i][0]==board[i][2] || board[0][i]==board[1][i]&& board[0][i]==board[2][i] )
    return false;
    if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[0][2]==board[1][1] && board [0][2]== board[2][0])
        return false;


    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    if(board[i][j]!= 'X'&& board[i][j] != 'O')
    return true;

    draw=true;
    return false;
}

int main()
{
    while(gameover())
    {
    display_Board();
    turn_player();
    gameover();
}
if(turn=='X' && draw == false)
{
    cout<<"\n\t\t Congratulation's!!\n\n\t\t player2 [O] win's\n"<<endl;
}

else if(turn=='O' && draw == false )
{
    cout<<"\n\t\t Congratulation's!!\n\n\t\t player1 [X] win's\n"<<endl;
}
else
{
    cout<<"\n\t\tGame Draw\n"<<endl;
}
int f;
cin>>f;
}








