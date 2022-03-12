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
