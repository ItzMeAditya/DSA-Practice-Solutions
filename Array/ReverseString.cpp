#include <iostream>
#include <string>
#include <vector>
using namespace std;

// function to reverse the string
void reverseString (string input)
{
	// declaring a vector to store the words
	vector <string> vec;
	string str = "";
	
	// loop for adding each word in vector
	for (int i=0; i<input.length(); i++)
	{
		if (input[i] == ' ')
		{
			vec.push_back(str);
			str = "";
		}
		else{
			str += input[i];
		}
	}
	// pushing last word in vector
	vec.push_back(str);
	
	// printing the string in reverse order
	cout << "Reverse string is : ";
	for (int i = vec.size()-1; i >= 0; i--)
	{
		cout << vec[i] << " ";
	}
}

// driver method
int main()
{
	// declaring string variable
	string input;
	cout << "Enter the string : ";
	// taking string input from the user
	getline (cin, input);
	
	// calling reverseString function
	reverseString (input);
	return 0;
}
