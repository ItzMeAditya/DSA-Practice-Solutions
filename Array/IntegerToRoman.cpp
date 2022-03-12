/*
Question : Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.
Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. 
Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX.

There are six instances where subtraction is used:
I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given an integer, convert it to a roman numeral.

Example :
Input: num = 58
Output: "LVIII"
Explanation: L = 50, V = 5, III = 3.
*/

#include <iostream>
using namespace std;

// function to convert Integer to Roman
string intToRoman (int num)
{
	string romans [] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int value [] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    
    int i=0;
    string ans = "";
    
    while (num > 0)
    {
    	while (num >= value[i])
    	{
    		ans += romans[i];
    		num -= value[i];
		}
		i++;
	}
	return ans;
}

// driver method
int main ()
{
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	while (t--)
	{
		int num;
		cout << "Enter an number to get the Roman number : ";
		cin >> num ;
		
		string output = intToRoman (num);
		cout << "Roman Number of " << num << " is : " << output << endl;
	}
	return 0;
}
