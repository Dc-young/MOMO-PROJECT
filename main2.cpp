#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    double balance, number, cashout, amount, oldPin, newPin;
    int option;
    int Pin = 0000;
    balance = 1000; //default balance

    int counter = 0;
    int enteredPin;

    while (counter < 3) {
        cout << "Enter Pin: ";
        cin >> enteredPin;
        if (enteredPin == Pin) {
            do {
                cout << "\n\t**************MENU**************";
                cout << "\n\t*                                *";
                cout << "\n\t*     1.Transfer                 *";
                cout << "\n\t*     2.Authentication           *";
                cout << "\n\t*     3.Check balance            *";
                cout << "\n\t*     4.Change Pin               *";
                cout << "\n\t*     5.Exit                     *";
                cout << "\n\t*                                *";
                cout << "\n\t**********************************" << endl;
                cout << "Please choose an option: ";
                cin >> option;
                switch (option) {
                    case 1:
                        cout << "\nEnter number: ";
                        cin >> number;
                        if (number <= 0) {
                            cout << "Invalid number. Please enter a positive number." << endl;
                            cout << "Enter number again: ";
                            cin >> number;
                        }
                        cout << "Enter amount: ";
                        cin >> amount;
                        if (balance < amount) {
                            cout << "\nYou do not have enough money in your account." << endl;
                        } else {
                            balance -= amount; //balance =balance-amount;
                            cout << "\nYour current balance: $" << balance << endl;
                        }
                        break;
                    case 2:
                        cout << "\nThis service is currently not available!!!" << endl;
                        break;
                    case 3:
                        cout << "\nYour balance is: $" << balance << endl;
                        break;
                    case 4:
                        cout << "\nEnter old Pin: ";
                        cin >> oldPin;
                        cout << "\nEnter new Pin: ";
                        cin >> newPin;
                        cout << "\nConfirm new Pin: ";
                        cin >> newPin;
                        cout << "\nYou have successfully changed your Pin." << endl;
                        break;
                    default:
                        if (option != 5)
                            cout << "\nInvalid option. Please try again." << endl;
                        break;
                }
            } while (option != 5);
            break;
        } else {
            cout << "\nWrong Pin" << endl;
            counter++;
        }
    }

    if (counter == 3) {
        cout << "\nToo many incorrect pin attempts. Your account has been blocked." << endl;
    }

    getch();
    return 0;
}
