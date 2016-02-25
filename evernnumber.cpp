/////////////////////
//EvenNumber Class
//Nathan Mumford
//CS172 section 1
//2/24/16
/////////////////////



#include <iostream>
#include "evennumber.h"
using namespace std;

int main()
{
	int x = 16;
	
	EvenNumber num1;
	cout << "The original value is " << num1.getValue(x) << endl; //call getvalue function
	cout << "The next even number is " << num1.getNext(x) << endl; //call getnextfunction
	cout << "The previous even number is " << num1.getPrevious(x) << endl; //call getprevious

}