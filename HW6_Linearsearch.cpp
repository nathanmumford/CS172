//////////////////////
//Linear Search
//Nathan Mumford
//CS172
//April 14, 2016
//////////////////////

#include <iostream>
#include <string>
using namespace std;

template< typename T > //create the template T
int linearSearch(const T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}

int main()
{
	int list[] = { 1, 4, 4, 2, 5, -3, 6, 2 }; //create the first array
	int i = linearSearch(list, 4, 8); //returns 1
	int j = linearSearch(list, -4, 8); //returns -1
	int k = linearSearch(list, -3, 8); //returns 5
	cout << i << endl << j << endl << k << endl; //cout the location of the values

	double list2[] = { 1.2, 1.5, 6.4, 3.4, 2.7, 9.5, 6.7, 4.5 };//create the second array
	int a = linearSearch(list2, 1.5, 8); //returns 1
	int b = linearSearch(list2, 23.1, 8); //returns -1
	int c = linearSearch(list2, 4.5, 8); //returns 7
	cout << a << endl << b << endl << c << endl;//cout the location of the values

	string list3[] = { "Shaun Fisher", "David Hendricks", "Marika Witt", "Matthew Chestnutt", "Melanie Hynden", "Steven Mumford", "Levi Detrich", "Caleb Scoon" };//create the third array
	int x = linearSearch <string>(list3, "Shaun Fisher", 8);//returns 0
	int y = linearSearch <string>(list3, "asdkljfa", 8);//returns -1
	int z = linearSearch <string>(list3, "Matthew Chestnutt", 8);//returns 3
	cout << x << endl << y << endl << z << endl;//cout the location of the values

}