/*
Question : Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.
Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. 
More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. 
It does not matter what you leave beyond the first k elements.
Return k after placing the final result in the first k slots of nums.
Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

Example :

Input : nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation : Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/


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
