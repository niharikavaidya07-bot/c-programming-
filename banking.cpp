#include<iostream>
using namespace std;
class savings_account
{
    string account_hol_name;
    int acc_no;
    float balance;
    float int_rate;

public:
    savings_account(string name,int accno,float initialBal,float rate)
    {
        account_hol_name=name;
        acc_no=accno;
        balance=initialBal;
        int_rate=rate;
    }
    void deposit(float amount )
    {
        if (amount >0)
        balance+=amount;
        cout<<"\nDeposited Rs:"<<amount<<endl;

    }
    void withdraw(float amount)
    {
        if (amount>0 and amount<=balance)
        {
            balance-=amount;
            cout<<"Withdrawn Rs:"<<amount<<endl;
        }

        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }
    void applyInterest()
    {
      float interest=balance*int_rate/100;
        balance+=interest;
      cout<<"Interest Applied Rs:"<<interest<<endl;
    }
    void display()
    {cout<<"\nAccount Holder Name:"<<account_hol_name<<endl;
        cout<<"Account Number:"<<acc_no<<endl;
        cout<<"Balance Rs:"<<balance<<endl;
        cout<<"Interest Rate:"<<int_rate<<"%"<<endl;
    }
    
};

class Checking_account
{
    string account_hol_name;
    int acc_no;
    float balance;
    float transaction_fee;

    public:
    Checking_account(string name,int accno,float initialBal,float fee)
    {
        account_hol_name=name;
        acc_no=accno;
        balance=initialBal;
        transaction_fee=fee;
    }
    void deposit(float amount)
    { 
        if (amount>0)
        {
            balance+=amount;
            cout<<"\nDeposited Rs:"<<amount<<endl;
        }
    }
    void Withdraw(float amount)
    {
        float total=amount + transaction_fee;
        if (total<=balance)
        {
            balance-=total;
            cout<<"Withdrawn Rs:"<<amount<<"Rs("<<transaction_fee<<"fee applied)"<<endl;
        }
        else
        {
            cout<<"Insufficent Balance"<<endl;
        }
    }
    void display()
    {
        cout<<"Account Holder Name:"<<account_hol_name<<endl;
        cout<<"Account Number:"<<acc_no<<endl;
        cout<<"Balance Rs:"<<balance<<endl;
        cout<<"Transaction Fee Rs:"<<transaction_fee<<endl;
    }
};

int main()
{
    cout<<"Savings Account:"<<endl;
    savings_account s1("niharika", 56789,30000.0, 5.0);
    s1.display();
    s1.deposit(2000);
    s1.withdraw(1000);
    s1.applyInterest();
    s1.display();

    cout<<"\nChecking Account:"<<endl;
    Checking_account c1("niharika", 56789,30000.0, 50.0);
    c1.display();
    c1.deposit(2000);
    c1.Withdraw(1000);
    c1.display();

    return 0;
}