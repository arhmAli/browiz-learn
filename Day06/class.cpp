// Create a BankAccount class with the following attributes and methods:
// Attributes:
// accountNumber (a unique identifier for each account)
// accountHolder (name of the account holder)
// balance (current balance in the account)
// Methods:
// Constructor: A constructor to initialize the account with an account number, 
// account holder name, and an initial balance.
// deposit(amount): A method to deposit a specified amount into the account.
// withdraw(amount): A method to withdraw a specified amount from the account. 
// Ensure that the withdrawal does not exceed the current balance.
// getBalance(): A method to retrieve the current balance of the account.
// displayAccountInfo(): A method to display the account information including the account number, 
// account holder name, and current balance.
// Now, create multiple instances of the BankAccount class, perform various transactions, and display
//  the account information.
#include <iostream>
#include <string>
using namespace std;
class bank{
    private:
    int accNumber;
    string accTitle;
    double balance;
    public:
    bank(int acc,string title,double bal){
        accNumber=acc;
        accTitle=title;
        balance=bal;
    }
     auto deposit(double amount){
        balance=balance+amount;
        cout<<"Added "<<endl<<amount<<"$"<<endl<<"Your new balance is :" <<balance<<endl;
    }
     auto withdraw(double amount){
        if(balance<amount){
            cout<<"Your account doesnt have enough credits try another transaction"<<endl;
        }
        else{
        balance=balance-amount;
        cout<<"Successfully withdrawed : "<<endl<<amount<<endl<<"Your new balance is : "<<endl<<balance;
        }
    }
    
};
int main(){
    int accountNumber;
    int balance;
    string title;
    int amount;
    bool log=false;
    bool login=false;
    cout<<"Enter account number"<<endl;
    cin>>accountNumber;
    cout<<"Enter your account title" <<endl;
    cin>>title;
    cout<<"Enter your balance"<<endl;
    cin>>balance;
    bank tit(accountNumber,title,balance);
    cout<<"You want deposit?"<<endl;
    cin>>log;
    if(log){
    cout<<"deposit an amount enter 0 for no deposit"<<endl;
    cin>>amount;
    tit.deposit(amount);
    }
    cout<<"You want withdraw?"<<endl;
    cin>>login;
    if(login){
    cout<<"withdraw an amount enter 0 for no withdraw"<<endl;
    cin>>amount;
    tit.withdraw(amount);
    }
    return 0;
}
