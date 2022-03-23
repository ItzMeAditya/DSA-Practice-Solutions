/*
Question : There is a broken calculator that has the integer startValue on its display initially. In one operation, you can:

multiply the number on display by 2, or
subtract 1 from the number on display.
Given two integers startValue and target, return the minimum number of operations needed to display target on the calculator.


Example :

Input: startValue = 2, target = 3
Output: 2
Explanation: Use double operation and then decrement operation {2 -> 4 -> 3}.
*/


#include <iostream>
using namespace std;

// function to get the minimum operations required
int brokenCalc(int startValue, int target) {
    int count = 0;
    while (target > startValue)
    {
        count++;
        if (target%2 == 0)
        {
            target = target/2;
        }else{
            target += 1;
        }
    }
    count = count + (startValue - target);
    return count;
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
		cout << "Enter the number : ";
		cin >> num;
		int target;
		cout << "Enter the target : ";
		cin >> target;
		
		int output =  brokenCalc (num, target);
		
		cout << "The minimum number of operations done is : " << output << endl;
	}
	return 0;
}
