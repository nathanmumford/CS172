#ifndef EVENNUMBER_H
#define EVENNUMBER_H

class EvenNumber
{
public:
	int value;
	int next1;
	int previous1;

	EvenNumber()
	{
		value = 0;
	}

	//overload constructor
	EvenNumber(int x)
	{
		value = x;
	}

	//get functions
	int getValue(int value) //get value
	{
		return value;
	}

	int getNext(int value) //get the next even number
	{
		next1 = value + 2; //add two to get next even
		return next1;
	}

	int getPrevious(int value) //get the previous even number
	{
		previous1 = value - 2; //subtract two to get previous even
		return previous1;
	}

};
#endif

