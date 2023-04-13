#include <iostream>
#include <cstdlib>
#include <ctime>
#include<conio.h>
#include<sstream>
#include<cctype>

using namespace std;

void computer();
void multiple();
void player();
string EnterOnlyNumbers();
int StringtoNum(string MyString);
void player10();
void player30();
void player50();

int main()
{
    system("Color 50");
    cout << "---Welcome gamer--- " << endl << endl;
    cout << "Game Catagory : " <<endl << endl;
    cout << "(1) Player vs Computer" << endl;
    cout << "(2) Player vs Player" << endl;
    cout << "(3) Multiple Player" << endl;
    cout << "(4) Exit" << endl << endl;


    int choice;

    cout << "Choice your option : ";
    cin >> choice;


    switch (choice)
    {
    case 1:
        computer();

        break;
    case 2:
        player();

        break;
    case 3 :
        multiple();
        break;
    case 4:
        cout << "\n\nQuit Game." << endl;
        exit(0);

        break;

    default:
        cout << "Invalid Game catagory choice.Please try again.\n\n";
        break;
    }

    return 0;
}

void computer()
{
    system("cls");
    int Computer, Player, Count = 0;
    srand(time(0));
    Computer = rand() % 100 + 1;
    cout << "---Welcome gamer--- " << endl << endl;
    cout << "Guess An Interger Number\n\n";

    do
    {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> Player;
        Count++;

        if (Player > Computer)
            cout << "Too high!\n\n";
        else if (Player < Computer)
            cout << "Too low!\n\n";
        else
            cout << "\nCorrect! You got it in " << Count << " guesses!\n" << "Congratulation!!!" << endl;
    }
    while (Player != Computer);
}

void multiple()
{
    system("cls");
    int Computer, Random_player;
    srand(time(0));
    cout << "---Welcome gamer--- " << endl << endl;
    cout << "Select your option : " << endl;
    cout << "(1) Easy Game." << endl;
    cout << "(2) Medium Game." << endl;
    cout << "(3) Hard Game." << endl;
    cout << "(4) Quit Game." << endl;

    int easy = 10, medium = 30, hard = 50;
    int c;
    cout << "\nChoice your option : ";
    cin >> c;
    switch(c)
    {
    case 1:
        player10();
        break;
    case 2 :
        player30();
        break;
    case 3:
        player50();
    case 4:
        cout << "\n\n\t\t---Quit Game---" << endl << endl;
        exit(4);
    default:
        cout << "Wrong Game choice\n\n " << endl;
    }


}


void player()
{
    system("cls");
    int num, guess, tries = 0;
    srand(time(0));
    cout << "---Welcome gamer--- " << endl << endl;
    cout << "Enter your secret number : " << endl;
    string s = EnterOnlyNumbers();
    num = StringtoNum(s);

    cout << "\n\nGuess An Interger Number\n\n";

    do
    {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess;
        tries++;

        if (guess > num)
            cout << "Too high!\n\n";
        else if (guess < num)
            cout << "Too low!\n\n";
        else
            cout << "\nCorrect! You got it in " << tries << " guesses!\n\n" << "Congratualtion!!!" << endl;
    }
    while (guess != num);
}

string EnterOnlyNumbers()
{
    string numAsString = "";
    char ch = getch();

    while (ch != '\r')
    {

        if (isdigit(ch))
        {
            cout << '*';
            numAsString += ch;
        }

        ch = getch();
    }
    return numAsString;
}

int StringtoNum(string MyString)
{
    istringstream converter(MyString);
    int result;

    converter >> result;
    return result;
}

void player10()
{
    system("cls");
    int Computer, Random_player;
    Computer = rand() % 10 + 1;

    cout << "\nGuess An Interger Number\n\n";

    do
    {
        cout << "Enter a guess between 1 and 10 : ";
        cin >> Random_player;

        if(Computer == Random_player)
            cout << "\n\nCorrect! You got it \n" << "Congratulation!!!" << endl<< endl;
        else
        {
            cout << "\n\nSorry!Wrong Number.\nNext Player turn." << endl << endl;
        }
    }
    while (Random_player != Computer);
}

void player30()
{
    system("cls");
    int Computer, Random_player;
    Computer = rand() % 30 + 1;

    cout << "\nGuess An Interger Number\n\n";

    do
    {
        cout << "Enter a guess between 1 and 30 : ";
        cin >> Random_player;

        if(Computer == Random_player)
            cout << "\n\nCorrect! You got it \n" << "Congratulation!!!" << endl<< endl;
        else
        {
            cout << "\n\nSorry!Wrong Number.\nNext Player turn." << endl << endl;
        }
    }
    while (Random_player != Computer);
}

void player50()
{
    system("cls");
    int Computer, Random_player;
    Computer = rand() % 50 + 1;

    cout << "\nGuess An Interger Number\n\n";

    do
    {
        cout << "Enter a guess between 1 and 50 : ";
        cin >> Random_player;

        if(Computer == Random_player)
            cout << "\n\nCorrect! You got it \n" << "Congratulation!!!" << endl<< endl;
        else
        {
            cout << "\n\nSorry!Wrong Number.\nNext Player turn." << endl << endl;
        }
    }
    while (Random_player != Computer);
}


