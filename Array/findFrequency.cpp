/*
Question : Given a vector of N positive integers and an integer X. The task is to find the frequency of X in vector.
*/

#include <iostream>
#include <vector>
using namespace std;

// findFrequency function
int findFrequency(vector<int> vec, int x)
{
	// maintaining a count variable to count the frequency
	int count=0;
	// iterating through a vector
	for ( auto i : vec )
	{
		if (i==x)
		{
			count++;
		}
	}
	// returning the frequency
	return count;
}

// driver method
int main ()
{
	// decalaring variables for test cases
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	while (t--)
	{
		// asking user to input
		int n;
		cout << "Enter the number of elements : ";
		cin >> n;
		
		vector<int> v;
		cout << "Enter the elements in the vector : ";
		for (int i=0; i<n; i++)
		{
			int k;
			cin >> k;
			v.push_back(k);   // pushing the elements inside the vector
		}
		
		// declaring variables whose frequecy to be find.
		int f;
		cout << "Enter the element whose frequency to be find : ";
		cin >> f;
		
		// calling function
		cout << findFrequency(v,f) << endl;
	}
	return 0;
}
