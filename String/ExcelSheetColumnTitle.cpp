/*
Leetcode Problem : 168
Question : Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28
*/

#include <iostream>
#include <string>

using namespace std;

// function to figure out the column title of given number
string convertToTitle(int columnNumber) {
    string ans = "";
    while(columnNumber){
        char c = 'A' + (columnNumber-1)%26;
        ans = c + ans;
        columnNumber = (columnNumber-1)/26;
    }
    return ans;
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
		// taking column number input from the user
		int num;
		cout << "Enter the column number : ";
		cin >> num;
		
		// calling the function
		string output = convertToTitle(num);
		
		// printing the output
		cout << output << endl;
	}
	return 0;
}
