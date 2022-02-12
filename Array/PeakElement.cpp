/*

Question : An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
Given an array arr[] of size N, find the index of any one of its peak elements.

*/

#include <iostream>
using namespace std;

// peakElement method
int peakElement (int arr[],int n)
{
	// declaring local variables
	int max=0,index;
	// iterating through loop
	for(int i=0;i<n;i++)
	{
		// searching for max element in the array
		if (arr[i]>max)
		{
			// storing max element & it's index
			max = arr[i];
			index = i;
		}
	}
	// returning the index of max element
	return index;
}

// driver method
int main()
{
	// declaring variables for test case
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		// asking user to input the size of the array
		cin>>n;
		// declaring array of size n
		int arr[n];
		// taking elements input from the user
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		// calling peakElement function
		int element = peakElement (arr,n);
		
		// printing the index of the max element
		cout<<element<<endl;
	}
	return 0;
}
