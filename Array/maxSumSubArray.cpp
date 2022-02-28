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
