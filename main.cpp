///////////////////////
//Shuffle vector
//Nathan Mumford
//CS172
//April 19, 2016
//////////////////////

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;



template<typename T>//create a template
void shuffle(vector<T>& v)
{
    srand(time(0));//pseudo-random number generator
    for(int i = 0; i < 10; i++)//for loop to randomly swap elements
    {
    int location = rand() % 10;//random locations that are between 0 and 9
    T temp = v[location];
    v[location] = v[i];
        v[i] = temp;
    }
}

int main()
{
    vector<int> v;
    //append the vector by using push_back and adding elements
    v.push_back(23);
    v.push_back(13);
    v.push_back(78);
    v.push_back(1);
    v.push_back(43);
    v.push_back(41);
    v.push_back(3);
    v.push_back(32);
    v.push_back(9);
    v.push_back(99);
 
    
    
    shuffle(v);//call the function
    for(int i; i < 10; i++)
        cout << v[i] << endl;//cout the number at each location
    
    
    return 0;
    
}