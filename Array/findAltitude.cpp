/*
Question  : There is a biker going on a road trip. The road trip consists of n + 1 points at different altitudes. 
The biker starts his trip on point 0 with altitude equal 0.

You are given an integer array gain of length n where gain[i] is the net gain in altitude between points i and i + 1 for all (0 <= i < n). 
Return the highest altitude of a point.


Input: gain = [-5,1,5,0,-7]

Output: 1
Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.
*/

#include  <iostream>
#include <vector>
using namespace std;

// function to find the largest altitude
int largestAltitude (vector<int> gain)
{
	// initializing variable
	int max = 0, sum =0;
	
	// loop for finding the largest altitude
	for (int i=0; i<gain.size(); i++)
	{
		sum += gain[i];
		
		if (sum > max)
		{
			max = sum;
		}
	}
	
	return sum;
}

// driver method
int main ()
{
	// varible declaration
	int t;
	cout << "Enter the number of test cases : ";
	// asking user to input number of test cases
	cin >> t;
	while (t--)
	{
		// asking user to input the number of elements in the vector
		int n;
		cout << "Enter the number of elements : ";
		cin >> n;
		
		// creating vector
		vector <int> gain;
		cout << "Enter the elements in the vector : ";
		
		// asking user to input the elements in the vector
		for (int i=0;i<n;i++)
		{
			int point;
			cin >> point;
			// pushing elements in the vector
			gain.push_back (point);
		}
		
		// calling the function
		int altitude = largestAltitude ( gain );
		
		// printing the largest altitude
		cout << "The largest altitude is : " << altitude;
	}
	return 0;
}
