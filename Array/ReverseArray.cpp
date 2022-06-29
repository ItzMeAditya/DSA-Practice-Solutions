#include <iostream>
using namespace std;

//Function to reverse the array
void reverseArray (int arr[],int n)
{
	int start = 0, end = n-1;
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

//Function to print array
void printArray (int arr[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout << arr[i] << " ";
	}
}

//driver method
int main ()
{
	int t;
	cout << "Enter number of test cases : ";
	cin >> t;
	while (t--)
	{
		int n;
		cout << "Size of the array : ";
		cin >> n;
		int arr[n];
		cout << "Enter elements in the array : ";
		for (int i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		
		cout << "Array before reversing : ";
		printArray (arr,n);
		cout << endl;
		
		reverseArray (arr, n);
		
		cout << "Array after reversing : ";
		printArray (arr,n);
		cout << endl;
	}
	return 0;
}
