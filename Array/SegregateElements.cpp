/*
 Question : Given an unsorted array arr[] of size N having both negative and positive integers. 
 The task is place all negative element at the end of array without changing the order of positive element and negative element.
 
 Input : 
 N = 8
 arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
 
 Output : 
 1  3  2  11  6  -1  -7  -5
*/

#include <iostream>
using namespace std;

// function to segregate the elements
void segregateElemets (int* arr, int n)
{
	// initializing an temporary array and a count variable to maintain the count
	int temp[n], count =0;
	
	// loop for copying all the positive elements
	for (int i=0; i<n; i++)
	{
		if (arr[i] >= 0 )
		{
			temp [count] = arr[i];
			count++;
		}
	}
	
	// loop for copying rest of the negative elements
	for (int i=0; i<n; i++)
	{
		if (arr[i] < 0)
		{
			temp[count] = arr[i];
			count++;
		}
	}
	
	// printing the elements from the temporary array
	cout << "Elements after segregated : ";
	for (int i=0; i<n; i++)
	{
		cout << temp[i] << " ";
	}
	cout << endl;
}

// driver method
int main ()
{
	// declaring variable for number of test cases
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	while (t--)
	{
		int size;
		cout << "Enter the size of the array : ";
		// asking user to input
		cin >> size;
		
		// creating dynamic array
		int* arr = new int[size];
		cout << "Enter the elements in the array : ";
		// asking user to input the array elements
		for (int i=0; i<size; i++)
		{
			cin >> arr[i];
		}
		
		// calling the function
		segregateElemets (arr, size);
		
		// destructuring the dynamic array
		delete [] arr;
	}
	return 0;
}
