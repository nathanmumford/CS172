#include <iostream>
#include <time.h>
#include "word.h"
#include <string>
#include <vector>
#include <fstream>
using namespace std;

word::word(string fileWord) //overloaded word constructor that reads in a string
{
    //initiate variables
    answer = fileWord;
    visual = "_";
    for (int i = 0; i < fileWord.size() - 1; i++) //for loop to set the underscores for the unknown word
        visual += " _";
    misses = 0;
    copyMisses = 0;
    wiggle = 0;
    spazz = 0;
    done = false;
}

void word::playWord() //method to play the game
{
    for (int i = 0; i < 100; i++) { cout << "\n"; }
    //display the 'gallows'
    cout << "| .__________))______|" << endl;
    cout << "| | / /      ||" << endl;
    cout << "| |/ /       ||" << endl;
    cout << "| | /        ||  " << endl;
    cout << "| |/         ||  " << endl;
    cout << "| |          ||       " << endl;
    cout << "| |                 " << endl;
    cout << "| |                 " << endl;
    cout << "| |                    " << endl;
    cout << "| |                    " << endl;
    cout << "| |                    " << endl;
    cout << "| |               " << endl;
    cout << "| |               " << endl;
    cout << "| |               " << endl;
    cout << "| |               " << endl;
    cout << "| |               " << endl;
    cout << "| |               " << endl;
    cout << "|_|_______|_        |_____|" << endl;
    cout << "|_|_______| |       __| |_|" << endl;
    cout << "| |       | |         | | |" << endl;
    cout << ": :       | |         : : |" << endl;
    cout << ". .                   . . |" << endl;
    cout << "\n";
    
    //do while which plays the game (asking for guesses) while the game is still going
    do {
        {
            
            cout << visual;
            
            //display the incorrect guesses
            cout << "\n" << "Incorrect guesses: ";
            for (int i = 0; i < copyMisses; i++)
                cout << badGuess[i] << ' ';
            cout << "\n";
            cout << "Lives left: " << 6 - misses << "\n"; //display the amount of lives remaining, which will initially be 6
            
            int matches = 0;
            cout << "Guess a letter! ";
            char guess;
            cin >> guess;
            if (!isalpha(guess)) //make sure the guess is a letter
                continue;
            
            for (int i = 0; i < answer.size(); i++) //check the answer to see if the guess matches up with any slot.
            {
                if (guess == answer[i])
                {
                    visual[2 * i] = guess;
                    matches++;
                }
            }
            
            for (int i = 0; i < 100; i++)
                cout << "\n";
            
            
            if (matches > 0)
            {
                if (misses == 0)//if the user guesses correctly, do not add a body part to the gallows
                {
                    cout << "| .__________))______|" << endl;
                    cout << "| | / /      ||" << endl;
                    cout << "| |/ /       ||" << endl;
                    cout << "| | /        ||  " << endl;
                    cout << "| |/         ||  " << endl;
                    cout << "| |          ||       " << endl;
                    cout << "| |                 " << endl;
                    cout << "| |                 " << endl;
                    cout << "| |                    " << endl;
                    cout << "| |                    " << endl;
                    cout << "| |                    " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "|_|_______|_        |_____|" << endl;
                    cout << "|_|_______| |       __| |_|" << endl;
                    cout << "| |       | |         | | |" << endl;
                    cout << ": :       | |         : : |" << endl;
                    cout << ". .                   . . |" << endl;
                }
                
                else if (misses == 1) //On the first miss, add a body part
                {
                    cout << "| .__________))______|" << endl;
                    cout << "| | / /      ||" << endl;
                    cout << "| |/ /       ||" << endl;
                    cout << "| | /        ||.-''." << endl;
                    cout << "| |/         ||  _  |" << endl;
                    cout << "| |          ||  `/,|" << endl;
                    cout << "| |          (\\`_.'" << endl;
                    cout << "| |               " << endl;
                    cout << "| |                " << endl;
                    cout << "| |                   " << endl;
                    cout << "| |                    " << endl;
                    cout << "| |                    " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "|_|_______|_        |_____|" << endl;
                    cout << "|_|_______| |       __| |_|" << endl;
                    cout << "| |       | |         | | |" << endl;
                    cout << ": :       | |         : : |" << endl;
                    cout << ". .                   . . |" << endl;
                }
                
                else if (misses == 2) //On the second miss, add a second body part
                {
                    cout << "| .__________))______|" << endl;
                    cout << "| | / /      ||" << endl;
                    cout << "| |/ /       ||" << endl;
                    cout << "| | /        ||.-''." << endl;
                    cout << "| |/         ||  _  |" << endl;
                    cout << "| |          ||  `/,|" << endl;
                    cout << "| |          (\\`_.'" << endl;
                    cout << "| |         .-`--'." << endl;
                    cout << "| |           . .  " << endl;
                    cout << "| |          |   |     " << endl;
                    cout << "| |          | . |     " << endl;
                    cout << "| |          |   |     " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "|_|_______|_        |_____|" << endl;
                    cout << "|_|_______| |       __| |_|" << endl;
                    cout << "| |       | |         | | |" << endl;
                    cout << ": :       | |         : : |" << endl;
                    cout << ". .                   . . |" << endl;
                }
                
                else if (misses == 3) //third miss, third body part
                {
                    cout << "| .__________))______|" << endl;
                    cout << "| | / /      ||" << endl;
                    cout << "| |/ /       ||" << endl;
                    cout << "| | /        ||.-''." << endl;
                    cout << "| |/         ||  _  |" << endl;
                    cout << "| |          ||  `/,|" << endl;
                    cout << "| |          (\\`_.'" << endl;
                    cout << "| |         .-`--'." << endl;
                    cout << "| |        (Y . .  " << endl;
                    cout << "| |       // |   |     " << endl;
                    cout << "| |      //  | . |     " << endl;
                    cout << "| |     ')   |   |     " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "|_|_______|_        |_____|" << endl;
                    cout << "|_|_______| |       __| |_|" << endl;
                    cout << "| |       | |         | | |" << endl;
                    cout << ": :       | |         : : |" << endl;
                    cout << ". .                   . . |" << endl;
                }
                
                else if (misses == 4) //fourth miss, fourth body part
                {
                    cout << "| .__________))______|" << endl;
                    cout << "| | / /      ||" << endl;
                    cout << "| |/ /       ||" << endl;
                    cout << "| | /        ||.-''." << endl;
                    cout << "| |/         ||  _  |" << endl;
                    cout << "| |          ||  `/,|" << endl;
                    cout << "| |          (\\`_.'" << endl;
                    cout << "| |         .-`--'." << endl;
                    cout << "| |        (Y . . Y)" << endl;
                    cout << "| |       // |   | \\\\" << endl;
                    cout << "| |      //  | . |  \\\\" << endl;
                    cout << "| |     ')   |   |   (`" << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "|_|_______|_        |_____|" << endl;
                    cout << "|_|_______| |       __| |_|" << endl;
                    cout << "| |       | |         | | |" << endl;
                    cout << ": :       | |         : : |" << endl;
                    cout << ". .                   . . |" << endl;
                }
                
                else if (misses == 5) //fifth miss, fifth body part
                {
                    cout << "| .__________))______|" << endl;
                    cout << "| | / /      ||" << endl;
                    cout << "| |/ /       ||" << endl;
                    cout << "| | /        ||.-''." << endl;
                    cout << "| |/         ||  _  |" << endl;
                    cout << "| |          ||  `/,|" << endl;
                    cout << "| |          (\\`_.'" << endl;
                    cout << "| |         .-`--'." << endl;
                    cout << "| |        (Y . . Y)" << endl;
                    cout << "| |       // |   | \\\\" << endl;
                    cout << "| |      //  | . |  \\\\" << endl;
                    cout << "| |     ')   | _ |   (`" << endl;
                    cout << "| |          ||   " << endl;
                    cout << "| |          ||   " << endl;
                    cout << "| |          ||   " << endl;
                    cout << "| |          ||   " << endl;
                    cout << "| |         | |   " << endl;
                    cout << "|_|_______|_`-'     |_____|" << endl;
                    cout << "|_|_______| |       __| |_|" << endl;
                    cout << "| |       | |         | | |" << endl;
                    cout << ": :       | |         : : |" << endl;
                    cout << ". .                   . . |" << endl;
                }
                
            }
            
            if (matches == 0)
            {
                {
                    for (int i = 0; i < 100; i++) //make the screen appear to be cleared
                        cout << "\n";
                    
                    //increment when it is an incorrect guess
                    misses++;
                    copyMisses++;
                    
                    badGuess.push_back(guess); //use vector pushback to add a guess to the vector list of badguess
                }
                
                //give the user a chance to avoid losing a life
                if (misses == 1)
                {
                    //set a timer
                    time_t timer1;
                    time_t timer2;
                    time(&timer1);
                    
                    time_t seconds = 0;
                    int hits = 0;
                    cout << "Hit 'g' and enter!!\n"; //prompt the user to hit 'g' and enter
                    while (seconds < 10)
                    {
                        //feature to show the man struggling in noose
                        if (spazz % 2 == 0) //if even, cout this
                        {
                            cout << "| .__________))______|" << endl;
                            cout << "| | / /      ||" << endl;
                            cout << "| |/ /       ||" << endl;
                            cout << "| | /        ||.-''." << endl;
                            cout << "| |/         ||  _  |" << endl;
                            cout << "| |          ||  `/,|" << endl;
                            cout << "| |          (\\`_.'" << endl;
                            cout << "| |         .-`--'." << endl;
                            cout << "| |        (Y . . Y)" << endl;
                            cout << "| |       // |   | \\\\" << endl;
                            cout << "| |      //  | . |  \\\\" << endl;
                            cout << "| |     ')   | _ |   (`" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |         | | | |" << endl;
                            cout << "|_|_______|_`-' `-' |_____|" << endl;
                            cout << "|_|_______| |       __| |_|" << endl;
                            cout << "| |       | |         | | |" << endl;
                            cout << ": :       | |         : : |" << endl;
                            cout << ". .                   . . |" << endl;
                            
                            cout << "\n";
                        }
                        else //if odd, cout this
                        {
                            cout << "| .__________))______|" << endl;
                            cout << "| | / /      ||" << endl;
                            cout << "| |/ /       ||" << endl;
                            cout << "| | /   .-''.||" << endl;
                            cout << "| |/   |   _ |||" << endl;
                            cout << "| |    | .(` |||" << endl;
                            cout << "| |     '._ '//" << endl;
                            cout << "| |        .-`--'." << endl;
                            cout << "| |       (Y . . Y)" << endl;
                            cout << "| |      // |   | \\\\" << endl;
                            cout << "| |     //  | . |  \\\\" << endl;
                            cout << "| |    ')   | _ |   (`" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         | | | |" << endl;
                            cout << "|_|_______|_`-' `-' |_____|" << endl;
                            cout << "|_|_______| |       __| |_|" << endl;
                            cout << "| |       | |         | | |" << endl;
                            cout << ": :       | |         : : |" << endl;
                            cout << ". .                   . . |" << endl;
                            
                            cout << "\n";
                        }
                        spazz++; //increment
                        time(&timer2);
                        seconds = timer2 - timer1;
                        char hit;
                        cin >> hit;
                        cout << "\n";
                        if (hit == 'g')
                            hits++; //count hits
                        for (int i = 0; i < 100; i++)
                            cout << "\n";
                    }
                    
                    char hit;
                    //hit while time is still going
                    do {
                        cin >> hit;
                        cout << "Survival round over, press 'q' ";
                    } while (hit != 'q');
                    
                    for (int i = 0; i < 100; i++)
                        cout << "\n";
                    
                    if (hits > 30 + (10 * wiggle)) //if user hits g enough times
                    {
                        misses--; //take away the missed life
                        wiggle++; //increment wiggle to make next difficulty harder
                        
                        cout << "| .__________))______|" << endl;
                        cout << "| | / /      ||" << endl;
                        cout << "| |/ /       ||" << endl;
                        cout << "| | /        ||  " << endl;
                        cout << "| |/         ||  " << endl;
                        cout << "| |          ||       " << endl;
                        cout << "| |                 " << endl;
                        cout << "| |                 " << endl;
                        cout << "| |                    " << endl;
                        cout << "| |                    " << endl;
                        cout << "| |                    " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "|_|_______|_        |_____|" << endl;
                        cout << "|_|_______| |       __| |_|" << endl;
                        cout << "| |       | |         | | |" << endl;
                        cout << ": :       | |         : : |" << endl;
                        cout << ". .                   . . |" << endl;
                        
                        
                        continue;
                    }
                    
                    cout << "| .__________))______|" << endl;
                    cout << "| | / /      ||" << endl;
                    cout << "| |/ /       ||" << endl;
                    cout << "| | /        ||.-''." << endl;
                    cout << "| |/         ||  _  |" << endl;
                    cout << "| |          ||  `/,|" << endl;
                    cout << "| |          (\\`_.'" << endl;
                    cout << "| |               " << endl;
                    cout << "| |                " << endl;
                    cout << "| |                   " << endl;
                    cout << "| |                    " << endl;
                    cout << "| |                    " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "|_|_______|_        |_____|" << endl;
                    cout << "|_|_______| |       __| |_|" << endl;
                    cout << "| |       | |         | | |" << endl;
                    cout << ": :       | |         : : |" << endl;
                    cout << ". .                   . . |" << endl;
                }
                else if (misses == 2)
                {
                    //set a timer
                    time_t timer1;
                    time_t timer2;
                    time(&timer1);
                    
                    time_t seconds = 0;
                    int hits = 0;
                    cout << "Hit 'g' and enter!!\n";//prompt the user to hit 'g' and enter
                    while (seconds < 10)
                    {
                        //feature to show the man struggling in noose
                        if (spazz % 2 == 0)//if even, cout this
                        {
                            cout << "| .__________))______|" << endl;
                            cout << "| | / /      ||" << endl;
                            cout << "| |/ /       ||" << endl;
                            cout << "| | /        ||.-''." << endl;
                            cout << "| |/         ||  _  |" << endl;
                            cout << "| |          ||  `/,|" << endl;
                            cout << "| |          (\\`_.'" << endl;
                            cout << "| |         .-`--'." << endl;
                            cout << "| |        (Y . . Y)" << endl;
                            cout << "| |       // |   | \\\\" << endl;
                            cout << "| |      //  | . |  \\\\" << endl;
                            cout << "| |     ')   | _ |   (`" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |         | | | |" << endl;
                            cout << "|_|_______|_`-' `-' |_____|" << endl;
                            cout << "|_|_______| |       __| |_|" << endl;
                            cout << "| |       | |         | | |" << endl;
                            cout << ": :       | |         : : |" << endl;
                            cout << ". .                   . . |" << endl;
                            
                            cout << "\n";
                        }
                        else//if odd, cout this
                        {
                            cout << "| .__________))______|" << endl;
                            cout << "| | / /      ||" << endl;
                            cout << "| |/ /       ||" << endl;
                            cout << "| | /   .-''.||" << endl;
                            cout << "| |/   |   _ |||" << endl;
                            cout << "| |    | .(` |||" << endl;
                            cout << "| |     '._ '//" << endl;
                            cout << "| |        .-`--'." << endl;
                            cout << "| |       (Y . . Y)" << endl;
                            cout << "| |      // |   | \\\\" << endl;
                            cout << "| |     //  | . |  \\\\" << endl;
                            cout << "| |    ')   | _ |   (`" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         | | | |" << endl;
                            cout << "|_|_______|_`-' `-' |_____|" << endl;
                            cout << "|_|_______| |       __| |_|" << endl;
                            cout << "| |       | |         | | |" << endl;
                            cout << ": :       | |         : : |" << endl;
                            cout << ". .                   . . |" << endl;
                            
                            cout << "\n";
                        }
                        spazz++;//increment
                        time(&timer2);
                        seconds = timer2 - timer1;
                        char hit;
                        cin >> hit;
                        cout << "\n";
                        if (hit == 'g')
                            hits++;//count hits
                        for (int i = 0; i < 100; i++)
                            cout << "\n";
                    }
                    
                    char hit;
                    //hit while time is still going
                    do {
                        cin >> hit;
                        cout << "Survival round over, press 'q' ";
                    } while (hit != 'q');
                    
                    for (int i = 0; i < 100; i++)
                        cout << "\n";
                    
                    if (hits > 30 + (10 * wiggle))//if user hits g enough times
                    {
                        misses--;//take away the missed life
                        wiggle++;//increment wiggle to make next difficulty harder
                        
                        cout << "| .__________))______|" << endl;
                        cout << "| | / /      ||" << endl;
                        cout << "| |/ /       ||" << endl;
                        cout << "| | /        ||.-''." << endl;
                        cout << "| |/         ||  _  |" << endl;
                        cout << "| |          ||  `/,|" << endl;
                        cout << "| |          (\\`_.'" << endl;
                        cout << "| |               " << endl;
                        cout << "| |                " << endl;
                        cout << "| |                   " << endl;
                        cout << "| |                    " << endl;
                        cout << "| |                    " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "|_|_______|_        |_____|" << endl;
                        cout << "|_|_______| |       __| |_|" << endl;
                        cout << "| |       | |         | | |" << endl;
                        cout << ": :       | |         : : |" << endl;
                        cout << ". .                   . . |" << endl;
                        
                        
                        continue;
                    }
                    
                    cout << "| .__________))______|" << endl;
                    cout << "| | / /      ||" << endl;
                    cout << "| |/ /       ||" << endl;
                    cout << "| | /        ||.-''." << endl;
                    cout << "| |/         ||  _  |" << endl;
                    cout << "| |          ||  `/,|" << endl;
                    cout << "| |          (\\`_.'" << endl;
                    cout << "| |         .-`--'." << endl;
                    cout << "| |           . .  " << endl;
                    cout << "| |          |   |     " << endl;
                    cout << "| |          | . |     " << endl;
                    cout << "| |          |   |     " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "|_|_______|_        |_____|" << endl;
                    cout << "|_|_______| |       __| |_|" << endl;
                    cout << "| |       | |         | | |" << endl;
                    cout << ": :       | |         : : |" << endl;
                    cout << ". .                   . . |" << endl;
                }
                else if (misses == 3)
                {
                    //set a timer
                    time_t timer1;
                    time_t timer2;
                    time(&timer1);
                    
                    time_t seconds = 0;
                    int hits = 0;
                    cout << "Hit 'g' and enter!!\n";//prompt the user to hit 'g' and enter
                    while (seconds < 10)
                    {
                        //feature to show the man struggling in noose
                        if (spazz % 2 == 0)//if even, cout this
                        {
                            cout << "| .__________))______|" << endl;
                            cout << "| | / /      ||" << endl;
                            cout << "| |/ /       ||" << endl;
                            cout << "| | /        ||.-''." << endl;
                            cout << "| |/         ||  _  |" << endl;
                            cout << "| |          ||  `/,|" << endl;
                            cout << "| |          (\\`_.'" << endl;
                            cout << "| |         .-`--'." << endl;
                            cout << "| |        (Y . . Y)" << endl;
                            cout << "| |       // |   | \\\\" << endl;
                            cout << "| |      //  | . |  \\\\" << endl;
                            cout << "| |     ')   | _ |   (`" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |         | | | |" << endl;
                            cout << "|_|_______|_`-' `-' |_____|" << endl;
                            cout << "|_|_______| |       __| |_|" << endl;
                            cout << "| |       | |         | | |" << endl;
                            cout << ": :       | |         : : |" << endl;
                            cout << ". .                   . . |" << endl;
                            
                            cout << "\n";
                        }
                        else//if odd, cout this
                        {
                            cout << "| .__________))______|" << endl;
                            cout << "| | / /      ||" << endl;
                            cout << "| |/ /       ||" << endl;
                            cout << "| | /   .-''.||" << endl;
                            cout << "| |/   |   _ |||" << endl;
                            cout << "| |    | .(` |||" << endl;
                            cout << "| |     '._ '//" << endl;
                            cout << "| |        .-`--'." << endl;
                            cout << "| |       (Y . . Y)" << endl;
                            cout << "| |      // |   | \\\\" << endl;
                            cout << "| |     //  | . |  \\\\" << endl;
                            cout << "| |    ')   | _ |   (`" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         | | | |" << endl;
                            cout << "|_|_______|_`-' `-' |_____|" << endl;
                            cout << "|_|_______| |       __| |_|" << endl;
                            cout << "| |       | |         | | |" << endl;
                            cout << ": :       | |         : : |" << endl;
                            cout << ". .                   . . |" << endl;
                            
                            cout << "\n";
                        }
                        spazz++;//increment
                        time(&timer2);
                        seconds = timer2 - timer1;
                        char hit;
                        cin >> hit;
                        cout << "\n";
                        if (hit == 'g')
                            hits++;//count hits
                        for (int i = 0; i < 100; i++)
                            cout << "\n";
                    }
                    
                    char hit;
                    //hit while time is still going
                    do {
                        cin >> hit;
                        cout << "Survival round over, press 'q' ";
                    } while (hit != 'q');
                    
                    for (int i = 0; i < 100; i++)
                        cout << "\n";
                    
                    if (hits > 30 + (10 * wiggle))//if user hits g enough times
                    {
                        misses--;//take away the missed life
                        wiggle++;//increment wiggle to make next difficulty harder
                        
                        cout << "| .__________))______|" << endl;
                        cout << "| | / /      ||" << endl;
                        cout << "| |/ /       ||" << endl;
                        cout << "| | /        ||.-''." << endl;
                        cout << "| |/         ||  _  |" << endl;
                        cout << "| |          ||  `/,|" << endl;
                        cout << "| |          (\\`_.'" << endl;
                        cout << "| |         .-`--'." << endl;
                        cout << "| |           . .  " << endl;
                        cout << "| |          |   |     " << endl;
                        cout << "| |          | . |     " << endl;
                        cout << "| |          |   |     " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "|_|_______|_        |_____|" << endl;
                        cout << "|_|_______| |       __| |_|" << endl;
                        cout << "| |       | |         | | |" << endl;
                        cout << ": :       | |         : : |" << endl;
                        cout << ". .                   . . |" << endl;
                        
                        
                        continue;
                    }
                    
                    cout << "| .__________))______|" << endl;
                    cout << "| | / /      ||" << endl;
                    cout << "| |/ /       ||" << endl;
                    cout << "| | /        ||.-''." << endl;
                    cout << "| |/         ||  _  |" << endl;
                    cout << "| |          ||  `/,|" << endl;
                    cout << "| |          (\\`_.'" << endl;
                    cout << "| |         .-`--'." << endl;
                    cout << "| |        (Y . .  " << endl;
                    cout << "| |       // |   |     " << endl;
                    cout << "| |      //  | . |     " << endl;
                    cout << "| |     ')   |   |     " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "|_|_______|_        |_____|" << endl;
                    cout << "|_|_______| |       __| |_|" << endl;
                    cout << "| |       | |         | | |" << endl;
                    cout << ": :       | |         : : |" << endl;
                    cout << ". .                   . . |" << endl;
                }
                else if (misses == 4)
                {
                    //set a timer
                    time_t timer1;
                    time_t timer2;
                    time(&timer1);
                    
                    time_t seconds = 0;
                    int hits = 0;
                    cout << "Hit 'g' and enter!!\n";//prompt the user to hit 'g' and enter
                    while (seconds < 10)
                    {
                        //feature to show the man struggling in noose
                        if (spazz % 2 == 0)//if even, cout this
                        {
                            cout << "| .__________))______|" << endl;
                            cout << "| | / /      ||" << endl;
                            cout << "| |/ /       ||" << endl;
                            cout << "| | /        ||.-''." << endl;
                            cout << "| |/         ||  _  |" << endl;
                            cout << "| |          ||  `/,|" << endl;
                            cout << "| |          (\\`_.'" << endl;
                            cout << "| |         .-`--'." << endl;
                            cout << "| |        (Y . . Y)" << endl;
                            cout << "| |       // |   | \\\\" << endl;
                            cout << "| |      //  | . |  \\\\" << endl;
                            cout << "| |     ')   | _ |   (`" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |         | | | |" << endl;
                            cout << "|_|_______|_`-' `-' |_____|" << endl;
                            cout << "|_|_______| |       __| |_|" << endl;
                            cout << "| |       | |         | | |" << endl;
                            cout << ": :       | |         : : |" << endl;
                            cout << ". .                   . . |" << endl;
                            
                            cout << "\n";
                        }
                        else//if odd, cout this
                        {
                            cout << "| .__________))______|" << endl;
                            cout << "| | / /      ||" << endl;
                            cout << "| |/ /       ||" << endl;
                            cout << "| | /   .-''.||" << endl;
                            cout << "| |/   |   _ |||" << endl;
                            cout << "| |    | .(` |||" << endl;
                            cout << "| |     '._ '//" << endl;
                            cout << "| |        .-`--'." << endl;
                            cout << "| |       (Y . . Y)" << endl;
                            cout << "| |      // |   | \\\\" << endl;
                            cout << "| |     //  | . |  \\\\" << endl;
                            cout << "| |    ')   | _ |   (`" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         | | | |" << endl;
                            cout << "|_|_______|_`-' `-' |_____|" << endl;
                            cout << "|_|_______| |       __| |_|" << endl;
                            cout << "| |       | |         | | |" << endl;
                            cout << ": :       | |         : : |" << endl;
                            cout << ". .                   . . |" << endl;
                            
                            cout << "\n";
                        }
                        spazz++;//increment
                        time(&timer2);
                        seconds = timer2 - timer1;
                        char hit;
                        cin >> hit;
                        cout << "\n";
                        if (hit == 'g')
                            hits++;//count hits
                        for (int i = 0; i < 100; i++)
                            cout << "\n";
                    }
                    
                    char hit;
                    //hit while time is still going
                    do {
                        cin >> hit;
                        cout << "Survival round over, press 'q' ";
                    } while (hit != 'q');
                    
                    for (int i = 0; i < 100; i++)
                        cout << "\n";
                    
                    if (hits > 30 + (10 * wiggle))//if user hits g enough times
                    {
                        misses--;//take away the missed life
                        wiggle++;//increment wiggle to make next difficulty harder
                        
                        cout << "| .__________))______|" << endl;
                        cout << "| | / /      ||" << endl;
                        cout << "| |/ /       ||" << endl;
                        cout << "| | /        ||.-''." << endl;
                        cout << "| |/         ||  _  |" << endl;
                        cout << "| |          ||  `/,|" << endl;
                        cout << "| |          (\\`_.'" << endl;
                        cout << "| |         .-`--'." << endl;
                        cout << "| |        (Y . .  " << endl;
                        cout << "| |       // |   |     " << endl;
                        cout << "| |      //  | . |     " << endl;
                        cout << "| |     ')   |   |     " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "|_|_______|_        |_____|" << endl;
                        cout << "|_|_______| |       __| |_|" << endl;
                        cout << "| |       | |         | | |" << endl;
                        cout << ": :       | |         : : |" << endl;
                        cout << ". .                   . . |" << endl;
                        
                        
                        continue;
                    }
                    
                    cout << "| .__________))______|" << endl;
                    cout << "| | / /      ||" << endl;
                    cout << "| |/ /       ||" << endl;
                    cout << "| | /        ||.-''." << endl;
                    cout << "| |/         ||  _  |" << endl;
                    cout << "| |          ||  `/,|" << endl;
                    cout << "| |          (\\`_.'" << endl;
                    cout << "| |         .-`--'." << endl;
                    cout << "| |        (Y . . Y)" << endl;
                    cout << "| |       // |   | \\\\" << endl;
                    cout << "| |      //  | . |  \\\\" << endl;
                    cout << "| |     ')   |   |   (`" << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "| |               " << endl;
                    cout << "|_|_______|_        |_____|" << endl;
                    cout << "|_|_______| |       __| |_|" << endl;
                    cout << "| |       | |         | | |" << endl;
                    cout << ": :       | |         : : |" << endl;
                    cout << ". .                   . . |" << endl;
                }
                else if (misses == 5)
                {
                    //set a timer
                    time_t timer1;
                    time_t timer2;
                    time(&timer1);
                    
                    time_t seconds = 0;
                    int hits = 0;
                    cout << "Hit 'g' and enter!!\n";//prompt the user to hit 'g' and enter
                    while (seconds < 10)
                    {
                        //feature to show the man struggling in noose
                        if (spazz % 2 == 0)//if even, cout this
                        {
                            cout << "| .__________))______|" << endl;
                            cout << "| | / /      ||" << endl;
                            cout << "| |/ /       ||" << endl;
                            cout << "| | /        ||.-''." << endl;
                            cout << "| |/         ||  _  |" << endl;
                            cout << "| |          ||  `/,|" << endl;
                            cout << "| |          (\\`_.'" << endl;
                            cout << "| |         .-`--'." << endl;
                            cout << "| |        (Y . . Y)" << endl;
                            cout << "| |       // |   | \\\\" << endl;
                            cout << "| |      //  | . |  \\\\" << endl;
                            cout << "| |     ')   | _ |   (`" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |          || ||" << endl;
                            cout << "| |         | | | |" << endl;
                            cout << "|_|_______|_`-' `-' |_____|" << endl;
                            cout << "|_|_______| |       __| |_|" << endl;
                            cout << "| |       | |         | | |" << endl;
                            cout << ": :       | |         : : |" << endl;
                            cout << ". .                   . . |" << endl;
                            
                            cout << "\n";
                        }
                        else//if odd, cout this
                        {
                            cout << "| .__________))______|" << endl;
                            cout << "| | / /      ||" << endl;
                            cout << "| |/ /       ||" << endl;
                            cout << "| | /   .-''.||" << endl;
                            cout << "| |/   |   _ |||" << endl;
                            cout << "| |    | .(` |||" << endl;
                            cout << "| |     '._ '//" << endl;
                            cout << "| |        .-`--'." << endl;
                            cout << "| |       (Y . . Y)" << endl;
                            cout << "| |      // |   | \\\\" << endl;
                            cout << "| |     //  | . |  \\\\" << endl;
                            cout << "| |    ')   | _ |   (`" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         || ||" << endl;
                            cout << "| |         | | | |" << endl;
                            cout << "|_|_______|_`-' `-' |_____|" << endl;
                            cout << "|_|_______| |       __| |_|" << endl;
                            cout << "| |       | |         | | |" << endl;
                            cout << ": :       | |         : : |" << endl;
                            cout << ". .                   . . |" << endl;
                            
                            cout << "\n";
                        }
                        spazz++;//increment
                        time(&timer2);
                        seconds = timer2 - timer1;
                        char hit;
                        cin >> hit;
                        cout << "\n";
                        if (hit == 'g')
                            hits++;//count hits
                        for (int i = 0; i < 100; i++)
                            cout << "\n";
                    }
                    
                    char hit;
                    //hit while time is still going
                    do {
                        cin >> hit;
                        cout << "Survival round over, press 'q' ";
                    } while (hit != 'q');
                    
                    for (int i = 0; i < 100; i++)
                        cout << "\n";
                    
                    if (hits > 30 + (10 * wiggle))//if user hits g enough times
                    {
                        misses--;//take away the missed life
                        wiggle++;//increment wiggle to make next difficulty harder
                        
                        cout << "| .__________))______|" << endl;
                        cout << "| | / /      ||" << endl;
                        cout << "| |/ /       ||" << endl;
                        cout << "| | /        ||.-''." << endl;
                        cout << "| |/         ||  _  |" << endl;
                        cout << "| |          ||  `/,|" << endl;
                        cout << "| |          (\\`_.'" << endl;
                        cout << "| |         .-`--'." << endl;
                        cout << "| |        (Y . . Y)" << endl;
                        cout << "| |       // |   | \\\\" << endl;
                        cout << "| |      //  | . |  \\\\" << endl;
                        cout << "| |     ')   |   |   (`" << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "| |               " << endl;
                        cout << "|_|_______|_        |_____|" << endl;
                        cout << "|_|_______| |       __| |_|" << endl;
                        cout << "| |       | |         | | |" << endl;
                        cout << ": :       | |         : : |" << endl;
                        cout << ". .                   . . |" << endl;
                        
                        
                        continue;
                    }
                    
                    cout << "| .__________))______|" << endl;
                    cout << "| | / /      ||" << endl;
                    cout << "| |/ /       ||" << endl;
                    cout << "| | /        ||.-''." << endl;
                    cout << "| |/         ||  _  |" << endl;
                    cout << "| |          ||  `/,|" << endl;
                    cout << "| |          (\\`_.'" << endl;
                    cout << "| |         .-`--'." << endl;
                    cout << "| |        (Y . . Y)" << endl;
                    cout << "| |       // |   | \\\\" << endl;
                    cout << "| |      //  | . |  \\\\" << endl;
                    cout << "| |     ')   | _ |   (`" << endl;
                    cout << "| |          ||   " << endl;
                    cout << "| |          ||   " << endl;
                    cout << "| |          ||   " << endl;
                    cout << "| |          ||   " << endl;
                    cout << "| |         | |   " << endl;
                    cout << "|_|_______|_`-'     |_____|" << endl;
                    cout << "|_|_______| |       __| |_|" << endl;
                    cout << "| |       | |         | | |" << endl;
                    cout << ": :       | |         : : |" << endl;
                    cout << ". .                   . . |" << endl;
                }
            }
        }
        
        int wrongCount = 0;
        
        for (int i = 0; i < answer.size(); i++) //loop to see how many openings remain in the answer
        {
            if (visual[2 * i] != answer[i])
                wrongCount++;
        }
        if (wrongCount == 0) //when there are no more openings, the game is over
            done = true;
        
        
    } while (done == false && misses < 6); //while the game isn't over
    
    if (misses < 6) //if misses are less than 6 after going through game play do-while loop, the user won
    {
        for (int i = 0; i < 2 * answer.size() - 1; i++)
            cout << visual[i]; //display the correct result
        cout << "\n";
        
        cout << "\n" << "Congratulations! You won!\n";
    }
    else //else they lost
    {
        cout << "| .__________))______|" << endl;
        cout << "| | / /      ||" << endl;
        cout << "| |/ /       ||" << endl;
        cout << "| | /        ||.-''." << endl;
        cout << "| |/         ||  _  |" << endl;
        cout << "| |          ||  `/,|" << endl;
        cout << "| |          (\\`_.'" << endl;
        cout << "| |         .-`--'." << endl;
        cout << "| |        (Y . . Y)" << endl;
        cout << "| |       // |   | \\\\" << endl;
        cout << "| |      //  | . |  \\\\" << endl;
        cout << "| |     ')   | _ |   (`" << endl;
        cout << "| |          || ||" << endl;
        cout << "| |          || ||" << endl;
        cout << "| |          || ||" << endl;
        cout << "| |          || ||" << endl;
        cout << "| |         | | | |" << endl;
        cout << "|_|_______|_`-' `-' |_____|" << endl;
        cout << "|_|_______| |       __| |_|" << endl;
        cout << "| |       | |         | | |" << endl;
        cout << ": :       | |         : : |" << endl;
        cout << ". .                   . . |" << endl;
        
        cout << "\n" << "Sorry, you lost!\n";
        cout << "The word was: " << answer << endl; //display the answer if the user didn't guess it
        
    }
    
    
}