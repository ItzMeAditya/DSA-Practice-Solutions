#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// function to find the two sum
vector<int> twoSum (vector<int>& v, int target)
{
	// creating vector & hash map
	vector <int> output;
	unordered_map <int , int> map;
	
	for (int i=0; i<v.size(); i++)
	{
		int req_sum = target - v[i];
		
		// checking if req_sum exist in map or not
		if (map.count(req_sum))
		{
			output.push_back(map.at(req_sum));
			output.push_back(i);
		}
		// adding element in map
		map[v[i]] = i;
	}
	// returning the vector
	return output;
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
		
		// asking user to input the target
		int target;
		cout << "Enter the target to find the two sum : ";
		cin >> target;
		
		// calling function
		vector<int> output =  twoSum(v, target);
		
		// printing the result
		for (int i=0; i<output.size() ;i++)
		{
			cout << output[i] << " " ;
		}
	}
	return 0;
}
