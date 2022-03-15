/*
Questions : Given a string s of '(' , ')' and lowercase English characters.
Your task is to remove the minimum number of parentheses ( '(' or ')', in any positions ) so that the resulting parentheses string is valid and return any valid string.
Formally, a parentheses string is valid if and only if:

It is the empty string, contains only lowercase characters, or
It can be written as AB (A concatenated with B), where A and B are valid strings, or
It can be written as (A), where A is a valid string.

Example :

Input: s = "lee(t(c)o)de)"
Output: "lee(t(c)o)de"
Explanation: "lee(t(co)de)" , "lee(t(c)ode)" would also be accepted.
*/


#include <iostream>
#include <string>
using namespace std;

// function to make valid parenthesis
string minRemoveToMakeValid(string s) {
    
    // storing the length of the string
    int n = s.length();
    string res = "";

    int count = 0;
    // iterating from beginnning
    for (int i = 0; i < s.length(); ++i)
    {
        // if we find and open parenthesis increase the cnt
        if (s[i] == '(')
            ++count;
    	// if we found an close parenthisis
        // check if cnt == 0 , that means we have no earlier open parenthesis,
        // therefore replace that index by '#'
        else if (s[i] == ')')
        {
            if (count == 0)
                s[i] = '#';
            // else decrease the cnt beacuse a valid pair is found
            else
                --count;
        }
    }

    count = 0;
    // iterating from the end
    for (int i = n - 1; i >= 0; --i)
    {
        // if we find and close parenthesis increase the cnt
        if (s[i] == ')')
            ++count;
        // if we found an open parenthisis
        // check if cnt == 0 , that means we have no earlier close parenthesis,
        // therefore replace that index by '#'
        else if (s[i] == '(')
        {
            if (count == 0)
                s[i] = '#';
            // else decrease the cnt beacuse a valid pair is found
            else
                --count;
        }
    }

    // making the resultant string by excluding '#'
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] != '#')
            res.push_back(s[i]);
    }
	
	// returning the string
    return res;
        
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
		// taking string input from the user
		string s;
		cout << "Enter the string with parenthesis : ";
		cin >> s;
		
		// calling the function
		string output = minRemoveToMakeValid(s);
		
		// printing the output
		for (int i=0;i<output.length();i++)
		{
			cout << output[i] ;
		}
		cout << endl;
	}
	return 0;
}
