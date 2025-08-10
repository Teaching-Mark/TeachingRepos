// Chapter5NestedLoopExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <random>

//void HRSGame();
int DetermineSelection();
int GetComputerChoice();
int GetUserChoice();
int DetermineWinners(int , int );
void DisplayGameMenu();
//void ReadFile();
//void SaveGameInfo();
void DisplayMainMenu();
int GetMenuSelection();

using namespace std;
const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;
const int QUIT = 4;


int main()
{
    int wins = 0;
    int plays = 0;
    int selection;
    do
    {
        DisplayMainMenu();
        selection = GetMenuSelection();
        DetermineSelection(selection);
        PlayRSP();
    } while (selection != QUIT);


 }
int GetMenuSelection() {
    int selection;
    cin >> selection;
    return selection;
}

void DetermineSelection(int selection) {
    switch (selection)
    {
    case 1:OpenGames();
    case 2:SaveGames();
    case 3:PayGame();
    case 4:Quit();

    }
}
void OpenGames() 
{
    fstream gamesFile;
    gamesFile.open()
    

    Games.txt

}
    void PlayRSP()
    {
        int wins, plays;
        while (true)

        {
            int userChoice = GetUserChoice();
            if (userChoice == QUIT)
                break;
            plays += 1;
            int computerChoice = GetComputerChoice();
            wins += DetermineWinners(userChoice, computerChoice);

        }
        cout << "You have had " << wins << "wins  out of  " << plays << " plays" << endl;
    }
}

void DisplayMainMenu() {
    cout << "1. Open Existing Games" << endl;
    cout << "2. Save current Game" << endl;
    cout << "3. Start a New Game" << endl;
    cout << "4. Quit Program" << endl;


}
int GetComputerChoice() {
    random_device RE;
    uniform_int_distribution<int>randomInt(ROCK, SCISSORS);
    return randomInt(RE);

}
int GetUserChoice() {
    int choice;

    while (true)
    {
        DisplayGameMenu();
        cin >> choice;
        if (choice != ROCK && choice != PAPER && choice != SCISSORS && choice != QUIT)
            cout << " Please enter a valid choice:" << endl;
        else
            break;
    }
    cin.ignore();
    return choice;
}

void DisplayGameMenu()

{
    cout << "Please enter the number of your choice:" << endl;
    cout << "1.Rock" << endl;
    cout << "2.Paper" << endl;
    cout << "3.Scissors" << endl;
    cout << "4.Quit" << endl;

}
int DetermineWinners(int userChoice = ROCK, int computerChoice = ROCK) {
    int win = 0;
    if (userChoice == computerChoice)
        cout << "You have made the same choices: no one wins" << endl;
    else
    {
        if (userChoice == ROCK)
            if (computerChoice == SCISSORS)
            {
                cout << "Your choice of ROCK " << "breaks SCISSORS " << ": you win!" << endl;
                win = 1;
            }
            else
                cout << "Your choice of ROCK " << "is covered by PAPER " << ": you lose!" << endl;
        else
            if (userChoice == SCISSORS)
            {
                if (computerChoice == ROCK)
                    cout << "Your choice of SCISSORS  is broken by  ROCK : you lose!" << endl;
                else
                    cout << "Your choice of SCISSORS cuts PAPER : you win!" << endl;
                win = 1;
            }
            else
                if (computerChoice == ROCK)
                {
                    cout << "Your choice of PAPER covers ROCK : you win!" << endl;
                    win = 1;
                }
        return win;
    }
}
 