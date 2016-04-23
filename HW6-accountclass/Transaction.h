#ifndef Transaction_h
#define Transaction_h
#include "Date.h"
#include <iostream>
using namespace std;
class Transaction
{
private:
    Date date;
    char type;
    double amount;
    double balance;
    string description;
    
public:
    Transaction()
    {
        type = ' ';
        amount = 0;
        balance = 0;
        description = "";
        
    }
    Transaction(char t, double a, double b, string d)
    {
        type = t;
        amount = a;
        balance = b;
        description = d;
    }
    
    char gettype()
    {
        return type;
    }
    
    void settype(char t)
    {
        t = type;
    }
    
    double getamount()
    {
        return amount;
    }
    
    void setamount(double a)
    {
        a = amount;
    }
    double getbalance()
    {
        return balance;
    }
    
    void setbalance(double b)
    {
        b = balance;
    }
    
    string getdescription()
    {
        return description;
    }
    
    void setdescription(string d)
    {
        d = description;
    }
    
};


#endif
