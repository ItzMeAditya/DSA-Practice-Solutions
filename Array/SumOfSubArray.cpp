/*
Question : Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}

Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.

*/


#include <iostream>
using namespace std;

// function to find the subarray
void subArray (int *arr, int n, int s)
{
	// initializing varibles
	int curr_sum = 0, left = 0;
	bool flag = false;
	
	// iterating till n to check the subArray sum
	for (int i=0;i<n;i++)
	{
		// updating current sum after each iteration
		curr_sum += arr[i];
		while (curr_sum != s && curr_sum > s)
		{
			curr_sum -= arr[left];
			left++;
		}
		
		// if current sum is equals to given sum then we simply print and break the loop
		if (curr_sum == s)
		{
			cout << "The subarray of given sum " << s << " is from index " << left << " to the index " << i <<endl;
			flag = true;
			break;
		}
	}
	
	// if subArray of given sum not found then we print the following message
	if (!flag)
	{
		cout << "The subarray of given sum not found! "<<endl;
	}
}

// driver method
int main ()
{
	// declaring variables
	int n, s;
	cout << "Enter the size of the array and the sum to find the subarray separated by a space : ";
	// asking user to input
	cin >> n >> s;
	
	// creating dynamic array
	int arr = new int[n];
	cout << "Enter the elements in the array : ";
	// asking user to input the elements in the array
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	// calling function
	subArray(arr,n,s);
	
	// destructuring the dynamic array
	delete [] arr;
	return 0;
}
