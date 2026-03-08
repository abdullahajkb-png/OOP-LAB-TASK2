#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:

    // Default Constructor
    BankAccount()
    {
        accountHolderName = "None";
        accountNumber = 10000;
        balance = 0;
    }

    // Parameterized Constructor
    BankAccount(string name, int num, double bal)
    {
        setName(name);
        setAccountNumber(num);
        setBalance(bal);
    }

    // Copy Constructor
    BankAccount(const BankAccount &obj)
    {
        accountHolderName = obj.accountHolderName;
        accountNumber = obj.accountNumber;
        balance = obj.balance;
    }

    // Setter for Name
    void setName(string name)
    {
        if(name == "")
        {
            cout << "Invalid Name" << endl;
        }
        else
        {
            accountHolderName = name;
        }
    }

    // Setter for Account Number
    void setAccountNumber(int num)
    {
        if(num >= 10000 && num <= 99999)
        {
            accountNumber = num;
        }
        else
        {
            cout << "Invalid Account Number" << endl;
        }
    }

    // Setter for Balance
    void setBalance(double bal)
    {
        if(bal >= 0)
        {
            balance = bal;
        }
        else
        {
            cout << "Invalid Balance" << endl;
        }
    }

    // Getter Functions
    string getName()
    {
        return accountHolderName;
    }

    int getAccountNumber()
    {
        return accountNumber;
    }

    double getBalance()
    {
        return balance;
    }

    // Display Function
    void displayAccountInfo()
    {
        cout << "Account Holder Name:  " << accountHolderName << endl;
        cout << "Account Number:       " << accountNumber << endl;
        cout << "Balance:              " << balance << endl;
    }
};

int main()
{
    // object using parameterized constructor
    BankAccount acc1("Ali", 12345, 5000);

    cout << "Account 1 Information:" << endl;
    acc1.displayAccountInfo();

    cout << endl;

    // object using copy constructor
    BankAccount acc2(acc1);

    cout << "Account 2 Information (Copy):" << endl;
    acc2.displayAccountInfo();

    return 0;
}