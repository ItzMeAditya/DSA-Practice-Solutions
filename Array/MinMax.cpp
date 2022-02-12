/*
 Question : Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.
*/


#include <iostream>
using namespace std;

// MinMax method
pair<long, long> getMinMax (long a[], int n)
{
	// initializing the maximum integer in min variable and minimum integer in max variable
	long min = INT_MAX , max = INT_MIN;
	// iterating for loop
	for (int i=0;i<n;i++)
	{
		// updating min and max
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	
	pair<long,long> p;
	p.first = min;
	p.second = max;
	// returning the pair to the driver method
	return p;
}

// driver method
int main ()
{
	// declaring variables for test case
	int t;
	cin>>t;
	while(t--)
	{
		// variable declaration
		int n;
		// asking user to input the size of an array
		cout<<"Enter the size of an array :";
		cin>>n;
		// intializing dynamic array
		long* arr = new long[n];
		cout<<"Enter the elements in the array :";
		// asking user to input the elements in the array
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		// creating a pair template to store both min and max value
		pair<long,long> pp = getMinMax (arr,n);
		
		cout<<"Minimum element is : "<<pp.first<<endl;
		cout<<"Max element is : "<<pp.second<<endl;
		// destructuring the dynamic array
		delete [] arr;
	}
	return 0;
}
