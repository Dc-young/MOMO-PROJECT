#include <iostream>
using namespace std;

int main() {
    string name = "JUSTICE KWAKYE";
    string pin = "0000";
    string input_pin;
    int tries = 3;
    double balance = 1000.0;
    
    cout<<"WELCOME TO MTN MOBILE MONEY SERVICE"<<endl;
    cout<<"******************MENU*********************"<<endl;
    cout<<"*                                         *"<<endl;
    cout<<"* 1. Authentication                       *"<<endl;
    cout<<"* 2. Checking Balance                     *"<<endl;
    cout<<"* 3. Sending Money                        *"<<endl;
    cout<<"* 4. Resetting/Changing Pin               *"<<endl;
    cout<<"* 5. Exit                                 *"<<endl;
    cout<<"*                                         *"<<endl;
	cout<<"******************MENU*********************"<<endl;
	cout<<"Enter Option: ";
	int option;
	cin >> option;
	
    if(option==1){
    cout<<"WELCOME TO AUTHENTICATION MENU"<<endl<<endl;
    cout << "Please enter your PIN: ";
    cin >> input_pin;
    
    while (tries > 1 && input_pin != pin) {
        tries--;
        cout << "Incorrect PIN. You have " << tries << " tries left." << endl;
        cout << "Please enter your PIN: ";
        cin >> input_pin;
    }
    
    if (input_pin == pin) {
        cout << "Authentication successful."<< endl<<endl;
        cout<<"Welcome "<<name<<endl;
        
        return 0;
    }
    else {
        cout << "Authentication failed. Exiting program." << endl;
        return 1;
    }
}   
    
    if(option==2){
    cout<<"WELCOME CHECKING BALANCE"<<endl<<endl;
    cout << "Please enter your PIN: ";
    cin >> input_pin;
    
    while (tries > 1 && input_pin != pin) {
        tries--;
        cout << "Incorrect PIN. You have " << tries << " tries left." << endl;
        cout << "Please enter your PIN: ";
        cin >> input_pin;
    }
    
    if (input_pin == pin) {
        cout << "Your current balance is: GHS " << balance <<"."<< endl;
        cout<<"Available Balance is: GHS "<< balance <<"."<<endl;
    }
    else {
        cout << "Authentication failed. Exiting program." << endl;
        return 1;
    }
    
    return 0;
}
    
    if(option==3){
    cout<<"WELCOME TO TRANSACTION MENU "<<endl<<endl;
    cout << "Please enter your PIN: ";
    cin >> input_pin;
    
    while (tries > 1 && input_pin != pin) {
        tries--;
        cout << "Incorrect PIN. You have " << tries << " tries left." << endl;
        cout << "Please enter your PIN: ";
        cin >> input_pin;
    }
    
    if (input_pin == pin) {
        cout << "Your current balance is : $ " << balance << endl<<endl;
        
        string recipient_number;
        double amount;
        
        cout << "Enter the recipient's phone number: ";
        cin >> recipient_number;
        cout << "Enter the amount to send: ";
        cin >> amount;
        
        if (recipient_number.length() <= 10 && amount <= balance) {
            balance -= amount;
            cout << "Transaction successful.   $ " << amount << " sent to " << recipient_number << "." << endl<<endl;
            cout << "Your current balance is : $ " << balance << "." << endl<<endl;
        }
        else if (recipient_number.length() > 10) {
            cout << "Error: Recipient phone number is too long." << endl<<endl;
        }
        else {
            cout << "Error: Insufficient funds." << endl<<endl;
        }
    }
    else {
        cout << "Authentication failed. Exiting program." << endl<<endl;
        return 1;
    }
    
    return 0;
}
    if(option==4){
    cout<<"WELCOME TO RESETTING/CHANGING PIN"<<endl<<endl;
    
    cout << "Please enter your PIN: ";
    cin >> input_pin;
    
    while (tries > 1 && input_pin != pin) {
        tries--;
        cout << "Incorrect PIN. You have " << tries << " tries left." << endl;
        cout << "Please enter your PIN: ";
        cin >> input_pin;
    }
    
    if (input_pin == pin) {
        string new_pin;
        
        cout << "Do you want to reset/change your PIN code? (y/n): ";
        char reset_choice;
        cin >> reset_choice;
        
        if (reset_choice == 'y' || reset_choice == 'Y') {
            cout << "Enter your old PIN code: ";
            cin >> input_pin;
            
            if (input_pin == pin) {
                cout << "Enter your new PIN code: ";
                cin >> new_pin;
                pin = new_pin;
                cout << "PIN code updated successfully." << endl;
            }
            else {
                cout << "Error: Old PIN code is incorrect." << endl;
                return 1;
            }
        }
    }
    else {
        cout << "Authentication failed. Exiting program." << endl;
        return 1;
    }
}
    else{
    cout<<"Your Pin is safe"<<endl;
}

    return 0;
}
