#include <bits/stdc++.h>
using namespace std;

// function to remove the element and return the size
int removeElement(vector<int>& nums, int val) {
    if (nums.size() == 0)
        return 0;
        
    int curr = 0;
    for (int i = 0;i<nums.size();i++)
    {
        if (nums[i] != val)
        {
            nums[curr] = nums[i];
            curr++;
        }
    }
    return curr;
}

// driver function
int main ()
{
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	while (t--)
	{
		int n;
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		vector<int> arr;
		cout << "Enter the elements : ";
		for (int i=0; i<n; i++)
		{
			int num;
			cin >> num;
			arr.push_back(num);
		}
		
		int val;
		cout << "Enter the value to remove : ";
		cin >> val;
		
		int output = removeElement(arr,val);
		
		cout << "The output after removing the occurence of given value is : " << output << endl;
	}
	return 0;
}
