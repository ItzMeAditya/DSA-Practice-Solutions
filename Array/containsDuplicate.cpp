/*
Leetcode : Contains Duplicate (217)
Question : Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:

Input: nums = [1,2,3,4]
Output: false

Example 2:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
*/


#include <bits/stdc++.h>
using namespace std;

// function to check duplicate element present or not
bool containsDuplicate (vector<int>& arr,int n)
{
	unordered_map <int,int> umap;
	for (int i=0;i<arr.size();i++)
	{
		if (umap.count(arr[i])){
			return true;
		}
		umap[arr[i]] = i;
	}
	return false;
}

// driver function
int main() {
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	while(t--){
		int n;
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		
		vector<int> a;
		cout << "Enter the elements : ";
		for (int i=0; i<n; i++)
		{
			int num;
			cin >> num;
			a.push_back(num);
		}
	
		bool output = containsDuplicate (a,n);
		cout << "Contains Duplicate : " << output << endl;
	}
	return 0;
}
