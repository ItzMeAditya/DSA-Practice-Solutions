/*
Question : Given an integer array nums, find the contiguous subarray (containing at least one number) 
which has the largest sum and return its sum. A subarray is a contiguous part of an array.

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
*/


#include <iostream>
#include <vector>
using namespace std;

// function to find the maximum sum of a sub array
int maxSumSubArray (vector<int>& v)
{
	int sum = 0, max = INT_MIN ;
	
	// loop to find the maximum sum
	for (int i=0; i<v.size(); i++)
	{
		// updating sum on every iteration
		sum += v[i];
		
		// updating max if condition satisfies
		if ( sum > max )
		{
			max = sum;
		}
		
		// updating sum if condition satisfies
		if (sum < 0)
		{
			sum = 0;
		}
	}
	// returning the max
	return max;
}

// driver method
int main ()
{
	// variable declaration
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	while (t--)
	{
		int n;
		cout << "Enter the number of elements : ";
		// taking input from the user
		cin >> n;
		
		// creating a vector
		vector <int> v;
		cout << "Enter the elements separated by space : ";
		for (int i=0; i<n; i++)
		{
			int num;
			cin >> num;
			v.push_back (num);
		}
		
		// calling function
		int maxSum = maxSumSubArray (v);
		
		// printing the result
		cout << "The maximum sum of the sub array is : " << maxSum << endl;
	}
	return 0;
}
