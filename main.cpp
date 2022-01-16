#include<iostream>
#include<process.h>
using namespace std;
int main()
{
    int option, pin;
    float balance=0, withdrawl=0, deposit=0;
    char choice;

    cout << "Please Enter your security PIN: " << endl;
    cin >> pin;         
    // Here assume your Security PIN is 5585
    if(pin==5585)
    {
        do
        {
            cout << "What you want to do? " << endl;
            cout << "1. Check The balance " << endl;
            cout << "2. Deposit The money " << endl;
            cout << "3. Withdrawl The money " << endl;
            cout << "4. Quit " << endl;
            cin >> option;
            balance = balance + deposit - withdrawl;
            if(option==1)
            {
                cout << "Current balance is " << balance << " $"<< endl;
            }
            else if(option==2)
            {
                cout << "How much money would you like to deposit? " << endl;
                cin >> deposit;
                cout << deposit << " $ has been added to your bank account " << endl;
     
            }
            else if(option==3)
            {
                cout << "How much money you want to withdraw? " << endl;
                cin >> withdrawl;
                if(withdrawl>balance)
                {
                    cout << "Sorry, Insufficient Balance " << endl;
                    continue;
                }
                else
                {
                    cout << "You have succesfully withdraw $ " << withdrawl << endl;
                    balance = balance + deposit - withdrawl;
                }
            }
            else
            {
                cout << "Invalid Input " << endl;
                cout << "Please Enter valid input " << endl;
            }
        
            cout << "Would you like to continue?(Y/N) " << endl;
            cin >> choice; 
        balance = balance + deposit - withdrawl;
        } 
        while (choice == 'y' || choice == 'Y');
        cout << "Thank you for using ATM service " << endl;
        cout << "Have a great day ahead " << endl;
    }
    else
    {
        cout << "Sorry, You have entered wrong security PIN " << endl;
    }
    system("pause");
    return 0;
}