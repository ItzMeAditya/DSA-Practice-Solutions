#include <iostream>
using namespace std;

// function to sort the array
void SortNum (int *a, int n)
{
    // initializing varibles
    int low = 0;
    int mid = 0;
    int high = n-1;
    
    // iterate till mid not becomes greater than high
    while (mid <= high)
	{
		// switch case to check the condition
        switch (a[mid])
		{
            case 0 :
            {
                int temp = a[mid];
                a[mid] = a[low];
                a[low] = temp;
                low++;
                mid++;
                break;
            } 
            case 1 :
            {
                mid++;
                break;
            }
            case 2 :
            {
                int temp = a[mid];
                a[mid] = a[high];
                a[high] = temp;
                high--;
                break;
            }
        }
    }
}

// driver method
int main ()
{
	// declaring variables for test cases
	int t;
	cout << "Enter the number of test cases : ";
	// taking input from the user
	cin >> t;
	while (t--)
	{
		// declaring int variable
		int n;
		cout << "Enter the size of the array : ";
		// taking input the size of the array
		cin >> n;
		
		// declaring dynamic array
		int* arr = new int[n];
		cout << "Enter the elements in form of 0s,1s,2s only : ";
		// asking the user to input the elements in the array
		for (int i = 0; i<n; i++)
		{
			cin >> arr[i];
		}
		
		// calling sort function
		SortNum (arr, n);
		
		// printing the sorted array
		for (int i=0; i<n; i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		
		// destructuring dynamic array
		delete [] arr;
	}
	return 0;
}
