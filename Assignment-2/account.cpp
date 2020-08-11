#include<iostream>
#include<string>
using namespace std;

class Account
{
public:
    Account(int);
    void credit(int);
    void debit(int);
    int getAccountBalance();
private:
    int accountBalance;
};
Account::Account(int balance)
{
    if(balance>=0)
        accountBalance=balance;
    else
    {
        accountBalance=0;
        cout<<"initial balance was invalid. "<<endl;
    }
}
void Account::credit(int balance)
{
    accountBalance = accountBalance + balance;
}
void Account::debit(int balance)
{
    if(accountBalance>=balance)
    {
        accountBalance = accountBalance - balance;
    }
    else
    {
        cout<<"debit amount exceeded account balance"<<endl;
    }
}
        int Account::getAccountBalance()
        {
            return accountBalance;
        }
        int main()
        {
            Account ac1(89);
            Account ac2(-76);
            cout<<"ac1 initial balance: "<<ac1.getAccountBalance()<<"\n ac2 initial balance is: "<< ac2.getAccountBalance() <<endl;
            ac1.credit(200);
            ac2.credit(34);
            cout<<"\nac1 balance is: "<<ac1.getAccountBalance()<<"\n ac2 balance is: "<< ac2.getAccountBalance() <<endl;
            ac1.debit(50);
            ac2.debit(34);
            cout<<"\nac1 balance is: "<<ac1.getAccountBalance()<<"\n ac2 balance is: "<< ac2.getAccountBalance() <<endl;

            }
