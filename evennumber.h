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
	int getValue(int value)
	{
		return value;
	}

	int getNext(int value)
	{
		next1 = value + 2;
		return next1;
	}

	int getPrevious(int value)
	{
		previous1 = value - 2;
		return previous1;
	}

};
#endif

