#include <iostream>
#include <vector>
#include <set>
using namespace std;

// function to find max number of candies she can eat
int DistributeCandies (vector<int> v)
{
	int n = v.size();
	// creating a set
    set<int> s;
    for (int i=0;i<n;i++)
    {
    	// inserting values inside set
    	s.insert(v[i]);
    }
    
    int setSize = s.size();
    // returning the number of candies
    return std::min(n/2,setSize);
}

// driver method
int main()
{
	// declaring variable
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	while (t--)
	{
		int size;
		cout << "Enter the number of elements : ";
		cin >> size;
		
		// creating a vector
		vector <int> v;
		
		cout << "Enter the elements : ";
		for (int i=0; i<size; i++)
		{
			int num;
			cin >> num;
			v.push_back(num);
		}
		
		// calling function
		int candies = DistributeCandies (v);
		
		// printing value
		cout << "The maximum number of different types of candies she can eat is : " << candies << endl;
	}
	
	return 0;
}
