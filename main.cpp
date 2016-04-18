///////////////////
//Is Sorted?
//Nathan Mumford
//CS172
//April 18, 2016
///////////////////

#include <iostream>
#include <string>
using namespace std;

//template to make a generic variable
template<typename T>
bool isSorted(const T list[], int size)
{
    for(int i = 0; i < size; i++)
    {
        //find the minimum in the list
        T currentMin = list[i];
        int currentMinIndex = i;
        
        for( int j = i + 1; j < size; j++)
        {
            if(currentMin > list[j])
            {
                currentMin = list[j];
                currentMinIndex = j;
            }
        }
        
        if (currentMinIndex != i) //test to see if the index is false
        {
            return false;
        }
    }
    return true; //if not false, return true
}

int main()
{
    int list[] = {1, 2, 3, 4, 5, 6}; //create a list of ints to test
    if(isSorted(list, 6) == 0)
        cout << "false" << endl;
    else
        cout << "true" << endl;
    
    double list2[] = {1.5, 4,7, 3.8, 5.9};//create a list of doubles to test
    if(isSorted(list2, 4) == 0)
        cout << "false" << endl;
    else
        cout << "true" << endl;
    
    string list3[] = {"Ally", "Chris", "David", "Zach"};//create a list of strings to test
    if(isSorted(list3, 4) == 0)
        cout << "false" << endl;
    else
        cout << "true" << endl;

}