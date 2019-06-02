//File:Mini project CSC 138 Mohd Irfan and Solehan
//Title:Mini Project CSC138
//Submitted by:Mohd.Irfan bin Julaihi and Solehan
//            All coding is done by our team some of the coding is inspiration from the internet.....
//For course:CSC138
//Due date  : September,2012
//Purpose:
//This program is to give an fun experience for the user.It was devolop from well-known game board game which is snake and ladder.
//This game only can be played by 2 player.First user need to enter their name as player 1 and automatically will be assign as symbol A.
//Same goes to player 2 he or she need to assign his or her name for the program and will be assign as symbol b.Then the program will prompt
//the user to press any button to toss dice.This game initially happened to be game of luck.Same goes to the program which is the player
//depend on the luck if they get huge number of dice they will go further but this is not a race game they will may encounter snake that can
//cause their position to decline.To win this game is easy.The person who reached first 100th box they will be a winner.Then,both of the player
//can play a new round if they want to.
//
//Overall method:
//The list of general task is:
//1.Display the title of the game
//2.Input name from the user 1 and user 2
//3.Player 1 turn and to continue he need to press any button then he will get random number from 1 to 6 according to dice pattern
//4.Player 2 turn and to continue he need to press any button then he will get random number from 1 to 6 according to dice pattern
//5.Then the display of the board will appear and the can see their symbol on the board if they happen  be on the same position the symbol will turn to "X"
//6.If the player encounter ladder they will move to the assign ladder position normally the number position will increase.
//7.If the player encounter snake  they will move to the snake ladder position normally the number position will decline.
//8.The winner of the game are choose if they happen to reach 100th box.
//9.The program will ask the player if they want to continue again if not the program exit.

#include <iostream.h>   //Header file
#include <conio.h>
#include <time.h>
#include <cstring.h>
#include <stdlib.h>
#define X 'A'          //Define X as A for player1
#define O 'B'          //Define O as B for player2
#define R 'X'          //Define R as X for player 1 and 2
const int row=10;       //const value for array
const int col=10;
struct map{              //struct definition
char name[20];
int count;
};
void progress (char array[][10]);   //function prototype
float toss(char array[][10]);
void drawline(int n,char ch);
float display1(int,map data[],int,int);
float display2(int,map data[]);
void post(map data[],int,int,int,int,int,int,int,int);
void now(map data[1],int,int,int,int);
void flow();
void main()
{
char array[row][col],answer,input; //initialize of 2d array form constant value
map data[2];                 //decalration of struct variable
int row,col,dice_num1,col1=0,col2=0,dice_num2,score1=0,score2=0,turn,num,scorea=0,scoreb=0,k=0,j=1; //variabele declaration
for(int i=0;i<row;i++){  //initialize of 2d array
for(int j=0;j<col;j++){
array[i][j]=' ';
}}
cout<<"\t\t";
drawline(50,'+');
cout<<"\n\n\t\t      2D ARRAY 100 BOX SNAKE AND LADDER GAME\n\n";  //Display at the beginning   //Display of the title
cout<<"\t\t";
drawline(50,'+');     //function to draw a line
cout<<"\n\n";
getch();  //function to stuck the display
clrscr(); //function to jump to new page
int i=1;  //initialiaze i =1
start:;  //start goto
cout<<"Please enter name for player 1 :";    //Enter name for player 1
cin>>data[0].name;
cout<<"\n"<<data[0].name<<" you will symbalize as A"<<endl;  //The output to tell the user symbol
cout<<"\nPlease enter name for player 2 :";  //enter name for player 2
cin>>data[1].name;
cout<<"\n"<<data[1].name<<" you will symbalize as B"<<endl;
getch();
score1=0;
score2=0;
do{      //do looping is used to make the game continue after each player turn
clrscr();
for(int i=0;i<10;i++){     //initialize the array with ' ' means blank
for(int j=0;j<10;j++){
array[i][j]=' ';}}
randomize();  //random for randoming value
turn=X;      //turn for player1 x is initialize with symbol x

cout<<data[0].name<<" turns!!!"<<endl; //output to tell the player his name and his turn
cout<<"Press any button to toss dice!!!"<<endl;
data[0].count=i++; //if this is player 1 turn it will be increase by 1 value per turn and initialize to struct
getch();
//cin>>dice_num1; //This coding can be used to go to desire box avoid entering char value it will make the looping exit
dice_num1=toss(array); //dice num1 equal to toss Note:Disable this coding first to enable the user input method
score1+=dice_num1;//score 1 will be final variable to initialize because the value need to be constantly added due to the facts dice only occurs from 1 to 6 and the
                 //score1 variable is needed for the if-else statement
switch(score1)//Switch score method using score1 variable to do the single task
{
case 98 :score1=28;cout<<"\aOops!! Snake found !! You are now down to positon 98 to 28 "<<endl;//if the score1 equal to 98 the score1 will turn to 28
scorea=98;                                                                                     //and display the output
break;                                                                                         //break is use to exit the loop if the condition is right
case 95 :score1=24;cout<<"\aOops!! Snake found !! You are now down to position 95 to 24"<<endl;//scorea is a variable that will not change just to show the previous position for the player
                                                                                                //same method for other statement
scorea=95;
break;
case 92 :score1=51;cout<<"\aOops!! Snake found !! You are now down to position 92 to 51 "<<endl;
scorea=92;
break;
case 83 :score1=19;cout<<"\aOops!! Snake found !! You are now down to position 83 to 19 "<<endl;
scorea=83;

break;
case 73 :score1=1;cout<<"\aOops!! Snake found !! You are now down to position 73 to 1 "<<endl;
scorea=73;

break;
case 69 :score1=33;cout<<"\aOops!! Snake found !! You are now down to position 69 to 33 "<<endl;
scorea=69;

break;
case 64 :score1=36;cout<<"\aOops!! Snake found !! You are now down to position 64 to 36 "<<endl;
scorea=64;

break;
case 59 :score1=17;cout<<"\aOops!! Snake found !! You are now down to position 59 to 17 "<<endl;
scorea=59;

break;
case 55 :score1=7;cout<<"\aOops!! Snake found !! You are now down to position 55 to 7 "<<endl;
scorea=55;

break;
case 52 :score1=11;cout<<"\aOops!! Snake found !! You are now down to position 52 to 11 "<<endl;
scorea=52;

break;                              //in case of snake or ladder found
case 48 :score1=9;cout<<"Oops!! Snake found !! You are now down to position 48 to 9 "<<endl;
scorea=48;

break;
case 46 :score1=5;cout<<"Oops!! Snake found !! You are now down to position 46 to 5 "<<endl;
scorea=46;

break;
case 44 :score1=22;cout<<"Oops!! Snake found !! You are now down to position 44 to 22 "<<endl;
scorea=44;

break;
case 8 :score1=26;cout<<"\aGreat!! you got a ladder !! You are now up to position 8 to 26"<<endl;
scorea=8;
break;
case 21 :score1=82;cout<<"\aGreat!! you got a ladder !! You are now up to position 8 to 26"<<endl;
scorea=21;

break;
case 43 :score1=77;cout<<"\aGreat!! you got a ladder !! You are now up to position 43 to 77"<<endl;
scorea=43;

break;
case 50 :score1=91;cout<<"\aGreat!! you got a ladder !! You are now up to position 50 to 91"<<endl;
scorea=50;

break;
case 54 :score1=93;cout<<"\aGreat!! you got a ladder !! You are now up to position 54 to 93"<<endl;
scorea=54;

break;
case 62 :score1=96;cout<<"\aGreat!! you got a ladder !! You are now up to position 62 to 96"<<endl;
scorea=62;

break;
case 66 :score1=87;cout<<"\aGreat!! you got a ladder !! You are now up to position 66 to 87"<<endl;
scorea=66;

break;
case 80 :score1=100;cout<<"\aGreat!! you got a ladder !! You are now up to position 80 to 100"<<endl;
scorea=80;

break;
}
if(score1<=10&&score1!=8){     //This is the part where the symbol will be appear on the box
                               //if the score1 below than 10 it will initialize it to 0 for the row in array and the score1 is -1
                               //because the array start from 0 while the random dice function start from
num=0;  //will be initialize for the row
col=score1-1;//will be initialize for the column

}else if(score1>10||score1<21){
num=0;
col=score1-1;

}else if(score1>20||score1<31){
num=2;
col=score1-1;

}else if(score1>30||score1<41){
num=3;
col=score1-1;

}else if(score1>40||score1<51){
num=4;
col=score1-1;

}else if(score1>50||score1<61){
num=5;

}else if(score1>60||score1<71){
num=6;
col=score1-1;

}else if(score1>70||score1<81){
num=7;
col=score1-1;

}else if(score1>80||score1<91){
num=8;
col=score1-1;

}else if(score1>90||score1<100){
num=9;
col=score1-1;
 }
if(score1>=100){
goto final;}  //if the score1 equal to 100 it will go to final
array[num][col]=X;
turn=O; //Then the turn for player 2 appears
cout<<data[1].name<<" turns!!!"<<endl;
cout<<"Press any button to toss dice"<<endl;
data[1].count=i++;
//cin>>dice_num2;
getch();
dice_num2=toss(array);

score2+=dice_num2;
switch(score2)
{
case 98 :score2=28;cout<<"\aOops!! Snake found !! You are now down to positon 98 to 28 "<<endl;
scoreb=98;
break;
case 95 :score2=24;cout<<"\aOops!! Snake found !! You are now down to positon 95 to 24 "<<endl;
scoreb=95;
break;
case 92 :score2=51;cout<<"\aOops!! Snake found !! You are now down to positon 92 to 51 "<<endl;
scoreb=92;
break;
case 83 :score2=19;cout<<"\aOops!! Snake found !! You are now down to positon 83 to 19 "<<endl;
scoreb=83;
break;
case 73 :score2=1;cout<<"\aOops!! Snake found !! You are now down to positon 73 to 1 "<<endl;
scoreb=73;
break;
case 69 :score2=33;cout<<"\aOops!! Snake found !! You are now down to positon 69 to 33 "<<endl;
scoreb=69;
break;
case 64 :score2=36;cout<<"\aOops!! Snake found !! You are now down to positon 64 to 36 "<<endl;
scoreb=64;
break;
case 59 :score2=17;cout<<"\aOops!! Snake found !! You are now down to positon 59 to 17 "<<endl;
scoreb=59;
break;
case 55 :score2=7;cout<<"\aOops!! Snake found !! You are now down to positon 55 to 7 "<<endl;
scoreb=55;
break;
case 52 :score2=11;cout<<"\aOops!! Snake found !! You are now down to positon 52 to 11 "<<endl;
scoreb=52;
break;
case 48 :score2=9;cout<<"\aOops!! Snake found !! You are now down to positon 48 to 9 "<<endl;
scoreb=48;
break;
case 46 :score2=5;cout<<"\aOops!! Snake found !! You are now down to positon 46 to 5 "<<endl;
scoreb=46;
break;
case 44 :score2=22;cout<<"\aOops!! Snake found !! You are now down to positon 44 to 22 "<<endl;
scoreb=44;
break;
case 8 :score2=26;cout<<"\aGreat!! you got a ladder !! You are now up to position 8 to 26"<<endl;
scoreb=8;
break;
case 21 :score2=82;cout<<"\aGreat!! you got a ladder !! You are now up to position 21 to 82"<<endl;
scoreb=21;
break;
case 43 :score2=77;cout<<"\aGreat!! you got a ladder !! You are now up to position 43 to 77"<<endl;
scoreb=43;                                                                                               
break;
case 50 :score2=91;cout<<"\aGreat!! you got a ladder !! You are now up to position 50 to 91"<<endl;
scoreb=50;
break;
case 54 :score2=93;cout<<"\aGreat!! you got a ladder !! You are now up to position 54 to 93"<<endl;
scoreb=54;
break;
case 62 :score2=96;cout<<"\aGreat!! you got a ladder !! You are now up to position 62 to 96"<<endl;
scoreb=62;
break;
case 66 :score2=87;cout<<"\aGreat!! you got a ladder !! You are now up to position 66 to 87"<<endl;
scoreb=66;
break;
case 80 :score2=100;cout<<"\aGreat!! you got a ladder !! You are at position "<<score2<<"\n";
scoreb=80;
break;
}
if(score2<=10){
num=0;
col2=score2-1;
}else if(score2>10||score2<21){
num=0;
col2=score2-1;
}else if(score2>20||score2<31){
num=2;
col2=score2-1;
}else if(score2>30||score2<41){
num=3;
col2=score2-1;
}else if(score2>40||score2<51){
num=4;
col2=score2-1;
}else if(score2>50||score2<61){
num=5;
col2=score2-1;
}else if(score2>60||score2<71){
num=6;
col2=score2-1;
}else if(score2>70||score2<81){
num=7;
col2=score2-1;
}else if(score2>80||score2<91){
num=8;
col2=score2-1;
}else if(score2>90||score2<100){
num=9;
col2=score2-1;
}
if(score2>=100){
goto final;
}
if(score1==score2){         //The statement is to help the user to understand the position if there is the case where the two players colide at the same box
array[num][col2]=R;        //so if the user score 1 equals to score 2 it will initialize it to r
}else if(score1!=score2){  //and if not equal it will follow the define o
array[num][col2]=O;}
progress(array);//function for display
now(data,score1,score2,0,1); //function to display the current player`s position
post(data,score1,score2,scorea,scoreb,dice_num1,dice_num2,k,j);//function to display the previous player`s position
cout<<endl;
flow(); //display for the position of snake and ladder
scorea=0; //it will initialize scorea to be 0 again to avoid misleading information for the user
scoreb=0;
getch();
}while(input!='y');//statement to avoid the loop to be exit
final:;
if(score1>score2){ //statement to determine who wims the game by referiing to the amount of the score
cout<<"Player 1 win with total turns "<<data[0].count<<endl;
}else
cout<<"Player 2 win with total turns "<<data[1].count<<endl;
cout<<"Do you want to play again (y/n)";
cin>>answer;
clrscr();
if(answer=='y'||answer=='Y')//statement to determine if the player want to continue
{
goto start;   //go to start it the player want to play again
}
getch();
cout<<"Thanks for playing "<<endl;
getch();
}
void drawline(int n,char ch)//This function is to help to draw a wanted character for display purpose
{
for(int i=0;i<n;i++)
cout<<ch;
}
float toss(char array[][10])//Function to determine the number of dice 100/% randoom
{
int dice;
dice=random(6)+1;;
cout<<"\aYou got "<<dice<<" point !! \n";
return dice;                                                                                                                                                          //"  \n";
}
void now(map data[1],int score1,int score2,int i,int j)//Function to determine the current position player
{

cout<<data[i].name<<" your now at position :"<<score1<<endl;
cout<<data[j].name<<" your now at position :"<<score2<<endl;
}
void post(map data[1],int score1,int score2,int scorea,int scoreb,int dice_num1,int dice_num2,int i,int j)//Function to determine the previous position of the player
{
if(scorea>0&&scoreb==0){    //if the score a occurs which is will be more than 0 and score b is never occur
                           //which is the simple meaning if the player 1 got ladder and the player got normal movement
cout<<data[i].name<<" your last position is : "<<scorea<<endl;
cout<<data[j].name<<" your last position is : "<<score2-dice_num2<<endl;
}else if(scorea>0&&scoreb>0){
cout<<data[i].name<<" your last position is : "<<scorea<<endl;
cout<<data[j].name<<" your last position is : "<<scoreb<<endl;
}else if(scoreb>0&&scorea==0){
cout<<data[i].name<<" your last position is : "<<score1-dice_num1<<endl;
cout<<data[j].name<<" your last position is : "<<scoreb<<endl;
}else if(scorea==0&&scoreb==0){
cout<<data[i].name<<" your last position is : "<<score1-dice_num1<<endl;
cout<<data[j].name<<" your last position is : "<<score2-dice_num2<<endl;
} }
void flow() //Function to display the snake and ladder position
{


cout<<"A for 'player 1' B for 'player 2' X for 'player 1 and 2 on same position'"<<endl;
drawline(50,'*');
cout<<endl;
cout<<"Snake Position "<<"          "<<"Ladder position"<<endl;
drawline(50,'*');
cout<<endl;
cout<<"   98 to 28    "<<"          "<<"8 to 26"<<endl;
cout<<"   95 to 24    "<<"          "<<"21 to 82"<<endl;
cout<<"   92 to 51    "<<"          "<<"43 to 77"<<endl;
cout<<"   83 to 19    "<<"          "<<"50 to 91"<<endl;
cout<<"   73 to 1     "<<"          "<<"62 to 96"<<endl;
cout<<"   69 to 33    "<<"          "<<"66 to 87"<<endl;
cout<<"   64 to 36    "<<"          "<<"80 to 100"<<endl;
cout<<"   59 to 17    "<<endl;
cout<<"   55 to 7     "<<endl;
cout<<"   52 to 11    "<<endl;
cout<<"   48 to 9     "<<endl;
cout<<"   46 to 5     "<<endl;
cout<<"   44 to 22    "<<endl;
}
void progress (char array[][10])//This function is for the board display......The assign array will appear according the initialize position.
{
        cout << "                                                             Finish"<<endl;
        cout << "       _____ _____ _____ _____ _____ _____ _____ _____ _____ _____ "<<endl;
        cout << "      |  91 |  92 |  93 | 94  | 95  | 96  | 97  | 98  | 99  |  100|\n";
        cout << "      |  " << array[9][0] << "  |  " << array[9][1] << "  |  " << array[9][2] << "  |  " << array[9][3] << "  |  " <<array[9][4]<< "  |  " <<array[9][5]<< "  |  "  << array[9][6] << "  |  " << array[9][7] << "  |  " << array[9][8] << "  |  " << array[9][9] <<"  |  "<<" \n";
        cout << "      |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____| \n";
        cout << "      |  81 |  82 |  83 |  84 |  85 |  86 |  87 |  88 |  89 |  90 |\n";
        cout << "      |  " << array[8][0] << "  |  " << array[8][1] << "  |  " << array[8][2] << "  |  " << array[8][3] << "  |  " <<array[8][4]<< "  |  " <<array[8][5]<< "  |  "  << array[8][6] << "  |  " << array[8][7] << "  |  " << array[8][8] << "  |  " << array[8][9] <<"  |  "<<" \n";
        cout << "      |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____| \n";
        cout << "      |  71 |  72 |  73 |  74 |  75 |  76 |  77 |  78 |  79 |  80 |\n";
        cout << "      |  " << array[7][0] << "  |  " << array[7][1] << "  |  " << array[7][2] << "  |  " << array[7][3] << "  |  " <<array[7][4]<< "  |  " <<array[7][5]<< "  |  "  << array[7][6] << "  |  " << array[7][7] << "  |  " << array[7][8] << "  |  " << array[7][9] <<"  |  "<<" \n";
        cout << "      |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____| \n";
        cout << "      |  61 |  62 |  63 |  64 |  65 |  66 |  67 |  68 |  69 |  70 |\n";
        cout << "      |  " << array[6][0] << "  |  " << array[6][1] << "  |  " << array[6][2] << "  |  " << array[6][3] << "  |  " <<array[6][4]<< "  |  " <<array[6][5]<< "  |  "  << array[6][6] << "  |  " << array[6][7] << "  |  " << array[6][8] << "  |  " << array[6][9] <<"  |  "<<" \n";
        cout << "      |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____| \n";
        cout << "      |  51 |  52 |  53 |  54 |  55 |  56 |  57 |  58 |  59 |  60 |\n";
        cout << "      |  " << array[5][0] << "  |  " << array[5][1] << "  |  " << array[5][2] << "  |  " << array[5][3] << "  |  " <<array[5][4]<< "  |  " <<array[5][5]<< "  |  "  << array[5][6] << "  |  " << array[5][7] << "  |  " << array[5][8] << "  |  " << array[5][9] <<"  |  "<<" \n";
        cout << "      |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____| \n";
        cout << "      |  41 |  42 |  43 |  44 |  45 |  46 |  47 |  48 |  49 |  50 |\n";
        cout << "      |  " << array[4][0] << "  |  " << array[4][1] << "  |  " << array[4][2] << "  |  " << array[4][3] << "  |  " <<array[4][4]<< "  |  " <<array[4][5]<< "  |  "  << array[4][6] << "  |  " << array[4][7] << "  |  " << array[4][8] << "  |  " << array[4][9] <<"  |  "<<" \n";
        cout << "      |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____| \n";
        cout << "      |  31 |  32 |  33 |  34 |  35 |  36 |  37 |  38 |  39 |  40 |\n";
        cout << "      |  " << array[3][0] << "  |  " << array[3][1] << "  |  " << array[3][2] << "  |  " << array[3][3] << "  |  " <<array[3][4]<< "  |  " <<array[3][5]<< "  |  "  << array[3][6] << "  |  " << array[3][7] << "  |  " << array[3][8] << "  |  " << array[3][9] <<"  |  "<<"  \n";
        cout << "      |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n";
        cout << "      |  21 |  22 |  23 |  24 |  25 |  26 |  27 |  28 |  29 |  30 | \n";
        cout << "      |  " << array[2][0] << "  |  " << array[2][1] << "  |  " << array[2][2] << "  |  " << array[2][3] << "  |  " <<array[2][4]<< "  |  " <<array[2][5]<< "  |  "  << array[2][6] << "  |  " << array[2][7] << "  |  " << array[2][8] << "  |  " << array[2][9] <<"  |  "<<"  \n";
        cout << "      |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n";
        cout << "      |  11 |  12 |  13 |  14 |  15 | 16  |  17 |  18 |  19 |  20 | \n";
        cout << "      |  " << array[1][0] << "  |  " << array[1][1] << "  |  " << array[1][2] << "  |  " << array[1][3] << "  |  " <<array[1][4]<< "  |  " <<array[1][5]<< "  |  "  << array[1][6] << "  |  " << array[1][7] << "  |  " << array[1][8] << "  |  " << array[1][9] <<"  |  "<<"  \n";
        cout << "      |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n";
        cout << "      |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10 |  \n";
        cout << "      |  " << array[0][0] << "  |  " << array[0][1] << "  |  " << array[0][2] << "  |  " << array[0][3] << "  |  " <<array[0][4]<< "  |  " <<array[0][5]<< "  |  "  << array[0][6] << "  |  " << array[0][7] << "  |  " << array[0][8] << "  |  " << array[0][9] <<"  |  "<<"  \n";
        cout << "      |_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n";
        cout << "       Start "<<endl;
        }



//Programmer1:Mohd.Irfan bin Julaihi
//Programmer2:Solehan Masran                   2
