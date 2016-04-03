/////////////////////////////
//Find the smallest element
//Nathan Mumford
//CS172
//April 3, 2016
////////////////////////////

#include <iostream>
using namespace std;

int main()
{
    int array[8] = {1, 2, 4, 5, 10, 100, 2, -22};
    int *ptr = array;
    int smallest = *ptr;
    for(int i = 0; i < 8; i++)
    {
        if(*(ptr + i) < smallest)
            smallest = *(ptr + i);
    }
    cout << "The smallest element is " << smallest << endl;
}