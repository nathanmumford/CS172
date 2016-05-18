#include <time.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <vector>
#include "word.h"
using namespace std;


int main()
{
    for (int i = 0; i < 100; i++)//Used for clearing screen after gameplay is finished
        cout << "\n";//after 100 spaces
    
    char choice;
    do {
        for (int i = 0; i < 100; i++)//Another clearing of the screen
            cout << "\n";
        cout << "                                   ██╗  ██╗ █████╗ ███╗   ██╗ ██████╗ ███╗   ███╗ █████╗ ███╗   ██╗    ██████╗\n";
        cout << "                                   ██║  ██║██╔══██╗████╗  ██║██╔════╝ ████╗ ████║██╔══██╗████╗  ██║    ╚════██╗\n";
        cout << "                                   ███████║███████║██╔██╗ ██║██║  ███╗██╔████╔██║███████║██╔██╗ ██║     █████╔╝\n";
        cout << "                                   ██╔══██║██╔══██║██║╚██╗██║██║   ██║██║╚██╔╝██║██╔══██║██║╚██╗██║    ██╔═══╝\n";
        cout << "                                   ██║  ██║██║  ██║██║ ╚████║╚██████╔╝██║ ╚═╝ ██║██║  ██║██║ ╚████║    ███████╗\n";
        cout << "                                   ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝ ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═══╝    ╚══════╝\n";
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

        //Cool graphics, huh? David created the menu design and it makes the game look much more professional and creative
        cout << "Which word length would you like to attempt?\n" <<
        "1) Five letters\n" << "2) Six letters\n" <<
        "3) Seven letters\n" << "4) Eight letters\n" <<
        "5) Ultimate Challenge (you will not succeed)\n";//Menu with options of 5-8 letter words and our CHALLENGE section
        int difficulty = 0;//Initializing difficulty to 0;
        cin >> difficulty;//Receives user input on what category they want
        
        if (difficulty < 1 || difficulty > 5)//Determines whether the user's input is within the range.
            //If not in range, the user will be asked to enter in a valid option
        {
            cout << "Please enter a valid option: ";
            cin >> difficulty;
        }
        
        srand(time(NULL));//Randomizing the selection of the word from the particular list
        
        string word = "";//used to add in each word to the vector
        string theWord = "";//the word that is selected to go through the play game function
        string fileName = "";//Used to find the file of words
        vector<string> wordList;//The words in each word list file
        int listLength;//Number of words in each file
        
        switch (difficulty)
        {
            case 1://User enters 1
            {
                fileName = "/Users/nathanmumford/Desktop/5letterwords.txt";//Pulls word from 5 letter words file in the project
                break;
            }
            case 2://user enters 2
            {
                fileName = "/Users/nathanmumford/Desktop/6letterwords.txt";//Pulls word from 6 letter words file in the project
                break;
            }
            case 3://User enters 3
            {
                fileName = "/Users/nathanmumford/Desktop/7letterwords.txt";//Pulls word from 7 letter words file in the project
                break;
            }
            case 4://User enters 4
            {
                fileName = "/Users/nathanmumford/Desktop/8letterwords.txt";//Pulls word from 8 letter words file in the project
                break;
            }
            case 5://user enters 5
            {
                fileName = "/Users/nathanmumford/Desktop/CrazyWords.txt";//Pulls word from the crazy words file in the project
            }
                
            default:
                break;
        }
        
        fstream file(fileName, ios::in | ios::out);
        
        while (!file.eof())
        {
            file >> word;
            wordList.push_back(word);
        }
        
        listLength = wordList.size();
        
        theWord = wordList[rand() % listLength];//Picks a random word out of the list in whichever file is chosen by the user
        
        class word play(theWord);//Puts the selected word into gameplay
        
        play.playWord();//Calls the function playword which sends the user into gameplay
        
        //User is asked if they want to play again
        cout << "Do you want to play again?";
        cout << endl;
        cout << "Please enter 'y' for yes, or 'n' for no: ";
        cin >> choice;//The user enters in y or n. If y, the user will be sent to the top of the menu to choose a
        //different category, but if n, the user will end the game and the program will end.
        
    } while (choice == 'y');//Repeats whole main sequence until choice == n
    
    return 0;
}