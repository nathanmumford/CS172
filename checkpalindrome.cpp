//Palindromes
//Nathan Mumford
//March 12, 2016
//CS172 section 1



#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	//prompt user to enter a string
	string input;
	cout << "Enter a string s: ";
	cin >> input;
	stack<char> stack1;
	bool isPalindrome = true; //bool to test if it is a palindrome or not
	int length = input.size(); //set length to the number of chars in the input

	//for loop to push the chars in the stack
	for (int i = 0; i < length; i++)
	{
		stack1.push(input[i]);
	}

	//for loop to pop the chars in the stack
	for (int j = 0; j < length; j++)
		{
			if (stack1.top() == input[j])
				stack1.pop();
			else
				isPalindrome = false;
		}
	//check if isPalindrome is true and cout the result
		if (isPalindrome == true)
			cout << "This is a palindrome!" << endl;
		else
			cout << "This is not a palindrome" << endl;

	
}