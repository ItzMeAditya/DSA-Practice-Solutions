/*
Question : Given an array arr[] and an integer K where K is smaller than size of array,
the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int kthSmallest (int *arr, int n, int k)
{
	// Own sorting algorithm to sort the array, here we commented out and using in-built sorting
	/*
	for (int i=0; i<n-1; i++)
	{
		for (int j=i+1; j<n; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}*/
	
	// Using in-built sort function of c++
	sort ( arr, arr+n );
	
	return arr[k-1];
}

int main ()
{
	int t;
	cout << "Enter the number of test cases :";
	cin >> t;
	while(t--)
	{
		// taking input from the user
		int n;
		cout << "Enter the size of the array :";
		cin >> n;
		
		int* arr = new int[n];
		cout << "Enter the elements in array : ";
		for( int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		
		int k;
		cout<<"Enter the Kth number to find the Kth smallest number : ";
		cin >> k;
		
		// calling function 
		int num = kthSmallest(arr, n, k);
		
		cout << "The "<<k<<"th smallest number in array is : "<<num<<endl;
		
		// destructuring dynamic array
		delete [] arr;
	}
	return 0;
}
