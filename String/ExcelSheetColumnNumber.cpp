/*
Question : Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
*/

#include <iostream>
#include <string>
using namespace std;

// function to figure out the column Number of given title
int titleToNumber(string columnTitle) {
    int result = 0;
    for (char c:columnTitle)
    {
        int x = c-'A'+1;
        result = result*26 + x;
    }
    return result;
}

// driver method
int main ()
{
	// taking number of test cases input from the user
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	while (t--)
	{
		// taking columnTitle input from the user
		string columnTitle;
		cout << "Enter the column title : ";
		cin >> columnTitle;
		
		// calling the function
		int output = titleToNumber(columnTitle);
		
		// printing the output
		cout << output << endl;
	}
	return 0;
}
