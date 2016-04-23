#include "accountclass.h"
#include <iostream>
#include "Transaction.h"
using namespace std;

account::account()
{
    id = 0;
    balance = 0;
    annualInterestRate = 0;
    name = "";
}

account::account(string n, int i, double b, string na)
{
    name = n;
    id = i;
    balance = b;
    na = name;
}

string account::getname()
{
    return name;
}

void account::setname(string na)
{
    name = na;
}

int account::getid()
{
    return id;
}

void account::setid(int i)
{
    id = i;
}

double account::getbalance()
{
    return balance;
}

void account::setbalance(double b)
{
    balance = b;
}

double account::getannualInterestrate()
{
    return annualInterestRate;
}

void account::setannualInterestrate(double a)
{
    annualInterestRate = a;
}

double account::getMonthlyInterestRate()
{
    double MonthlyInterestRate = annualInterestRate / 12;
    return MonthlyInterestRate;
}

void account::withdraw(double amount)
{
    balance = balance - amount;
}

void account::deposit(double amount)
{
    balance = balance + amount;
}

vector<Transaction> account::gettransactions()
{
    return transactions;
}

void account::settransactions(vector<Transaction> t)
{
    t = transactions;
}



