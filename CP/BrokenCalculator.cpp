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
