/////////////////////////////
//Increase array size
//Nathan Mumford
//April 1, 2016
//CS172
////////////////////////////

#include <iostream>]
using namespace std;

int* doubleCapacity(const int* list, int size);

int main()
{
	int size; //size of the array
	cout << "Enter in a size for the array: ";
	cin >> size;
	int * pintarray = new int[size];//allocate array
	

	for (int i = 0; i < size; i++) //for loop to allow user to enter numbers into array
	{
		cout << "Enter in a value: ";
		cin >> pintarray[i];
	}

	for (int i = 0; i < 2 * size; i++)
	{
		cout << *(pintarray + i) << endl; //cout the new array
	}

}

int* doubleCapacity(const int* list, int size)
{	
	
	int * pintarray2 = new int[2 * size];//allocate array
	for (int i = 0; i < size; i++)
	{
		*(pintarray2 + i) = *(list + i); //set the values of the first array to the values of the new array
	}
	return pintarray2;

}