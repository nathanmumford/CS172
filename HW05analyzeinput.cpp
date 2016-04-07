//////////////////////////////////////
//Analyze Inputs
//Nathan Mumford
//CS172
//March 31, 2016
///////////////////////////////////////

#include <iostream>
using namespace std;



int main()
{
	//write a program that reads an integer for the array size
	int size; //size of the array
	cout << "Enter in a size for the array: ";
	cin >> size;
	int * pintarray = new int[size];//allocate array
	double sum = 0;

	for (int i = 0; i < size; i++) //for loop to allow user to enter numbers into array
	{
		cout << "Enter in a value: ";
		cin >> pintarray[i];
		sum += pintarray[i];
	}
	double average = sum / size;
	int count = 0; //counter variable
	for (int i = 0; i < size; i++)
	{
		if (pintarray[i] > average)//check each number in the array to see if it is greater than the average
			count++;//increments each time through loop
	}
	

	
	cout << "The average is " << average << endl;
	cout << "There are " << count << " numbers greater than the average.";
	//find out how many numbers are above the average

}

