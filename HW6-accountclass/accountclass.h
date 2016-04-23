#include <iostream>
#include <string>
#include <vector>
#include "Transaction.h"
using namespace std;

#ifndef ACCOUNTCLASS_H
#define ACCOUNTCLASS_H

class account
{
private:
    int id;
    double balance;
    double annualInterestRate;
    string name;
    
    vector<Transaction> transactions;
    
public:
    account();
    account(string, int, double, string);
    string getname();
    void setname(string);
    int getid();
    void setid(int);
    double getbalance();
    void setbalance(double);
    double getannualInterestrate();
    void setannualInterestrate(double);
    double getMonthlyInterestRate();
    void withdraw(double);
    void deposit(double);
    vector<Transaction> gettransactions();
    void settransactions(vector<Transaction>);
};
#endif

