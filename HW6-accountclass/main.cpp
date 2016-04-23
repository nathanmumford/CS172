///////////////////////
//New account class
//Nathan Mumford
//CS172
//April 19, 2016
//////////////////////

#include <iostream>
#include "accountclass.h"
#include "Transaction.h"
using namespace std;

int main()
{
    account account1;
  
    account1.setid(1122);
    account1.setbalance(1000);
    account1.setannualInterestrate(1.5);
    account1.setname("George");
    account1.withdraw(5);
    account1.withdraw(4);
    account1.withdraw(2);
    account1.deposit(30);
    account1.deposit(40);
    account1.deposit(50);
    cout << account1.getname() << endl;
    cout << account1.getannualInterestrate() << endl;
    cout << account1.getbalance() << endl;
    Transaction transaction1;
    transaction1.settype('W');
    cout << transaction1.gettype() << endl;
    transaction1.setamount(5);
    cout << transaction1.getamount();
    transaction1.setdescription("George withdrew 5 dollar");
    cout << transaction1.getdescription();
    
}