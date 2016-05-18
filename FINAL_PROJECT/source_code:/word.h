#ifndef word_h
#define word_h
#include <string>
#include <vector>
using namespace std;

class word
{
private:
    string answer; //string contains the word being guessed
    string visual; //string contains the the blanks and correctly guessed letters outputted to the screen
    vector<char> badGuess; //char vector contains all incorrect letter guesses
    int misses; //keeps track of number of misses, but changes depending on survival round
    int copyMisses; //keeps track of all past misses, does not change depending on survival round
    int wiggle; //keeps track of number of successful survivals
    int spazz; //alternates with each hit in the survival round to produce "spazzing"
    bool done; //false until each letter is guessed or all lives are lost
    
public:
    word(string); //constructs word
    void playWord(); //plays each word object, generalized to work with any length
};


#endif
