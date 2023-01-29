

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

    bool Repeat = true;
    int PlayAgain = 1;
    int Wins = 0;
    int Draws = 0;
    int Losses = 0;
    
    string Options[3] = {"Rock", "Paper", "Scissors" };
    string ComputerHand;
    string PlayerHand;

    while (Repeat == true) {
        ComputerHand = Options[rand() % 3];

        system("cls");
        bool IsPossibleHand = false;

        cout << "You have " << Wins << " Wins, " << Losses << " Losses and " << Draws << " Draws\n\n";
        cout << "Rock(1), Paper(2), Scissors(3) : ";
        cin >> PlayerHand;


        while (IsPossibleHand == false) {
            if (PlayerHand == "1") {
                PlayerHand = Options[0];
                IsPossibleHand = true;
            }

            else if (PlayerHand == "2") {
                PlayerHand = Options[1];
                IsPossibleHand = true;
            }

            else if (PlayerHand == "3") {
                PlayerHand = Options[2];
                IsPossibleHand = true;
            }
            else {
                cout << "Enter either Rock(1), Paper(2) or Scissors(3)";
            }
        }

        if (PlayerHand == ComputerHand) {
            ++Draws;
            system("cls");
            cout << "You have " << Wins << " Wins, " << Losses << " Losses and " << Draws << " Draws\n\n";
            cout << "You Drew";
            
        }

        else if (PlayerHand == "Rock" && ComputerHand == "Scissors") {
            ++Wins;
            system("cls");
            cout << "You have " << Wins << " Wins, " << Losses << " Losses and " << Draws << " Draws\n\n";
            cout << "You Won";            
        }
        else if (PlayerHand == "Paper" && ComputerHand == "Rock") {
            ++Wins;
            system("cls");
            cout << "You have " << Wins << " Wins, " << Losses << " Losses and " << Draws << " Draws\n\n";
            cout << "You Won";
        }
        else if (PlayerHand == "Scissors" && ComputerHand == "Paper") {
            ++Wins;
            system("cls");
            cout << "You have " << Wins << " Wins, " << Losses << " Losses and " << Draws << " Draws\n\n";
            cout << "You Won";
        }

        else {
            ++Losses;
            system("cls");
            cout << "You have " << Wins << " Wins, " << Losses << " Losses and " << Draws << " Draws\n\n";
            cout << "You Lost";
        }

        cout << "\nYou played " << PlayerHand << ", the computer played " << ComputerHand;

        cout << "\n\nWould you like to play again? Yes(1) or No(2) : ";
        cin >> PlayAgain;
        if (PlayAgain == 2) {
            Repeat = false;
        }
    }

}