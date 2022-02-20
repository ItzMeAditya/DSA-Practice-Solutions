#include <iostream>
using namespace std;

// function to find the single number which exist in array
int findSingleNum (int *nums, int n)
{
	// varible to calculate the XOR of every elements in array
	int cal = 0;
	
	// here we calculating XOR of two numbers. In XOR if two numbers were 0 & 0 then it returns 0 else if 0 & 1 then it returns 1
	for (int i=0; i<n; i++)
	{
		cal ^= nums[i];
	}
	return cal;
}

// driver method
int main ()
{
	// varible for number of test cases
	int t;
	cout << "Enter the number of test cases : ";
	// asking user to input the number of test cases
	cin >> t;
	while (t--)
	{
		// variable for size of the array 
		int n;
		cout << "Enter the size of the array : ";
		// asking user to input the size of the array
		cin >> n;
		
		// initializing dynamic array
		int* nums = new int[n];
		cout << "Enter the elements in the array : ";
		// taking array elements input from the user
		for (int i=0; i<n; i++)
		{
			cin >> nums[i];
		}
		
		// calling function
		int singleNum = findSingleNum (nums, n);
		
		// printing the single number
		cout << "The number which is single in given array is : " << singleNum << endl;
		
		// destructuring dynamic array
		delete [] nums;
	}
	return 0;
}
