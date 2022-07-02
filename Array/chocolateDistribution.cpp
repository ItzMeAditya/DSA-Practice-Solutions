/*
Question : Given an array of n integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. 
There are m students, the task is to distribute chocolate packets such that:
(i) Each student gets one packet.
(ii) The difference between the number of chocolates in the packet with maximum chocolates and packet with minimum chocolates given to the students is minimum.

Example :

Input : arr = [7,3,2,4,9,12,56]
Output : The minimum difference is 2
*/


#include <bits/stdc++.h>
using namespace std;

// function to minimize difference
int chocolateDistribution (vector<int> arr, int n, int m){
	if (m == 0 || n == 0){
		return 0;
	}
	
	if (n<m){
		return -1;
	}
	
	sort(arr.begin(),arr.end());
	
	int min_Diff = INT_MAX;
	
	for (int i=0; i+m-1 < n; i++)
	{
		int diff = arr[i+m-1] - arr[i];
		if (diff < min_Diff) {
			min_Diff = diff;
		} 
	}
	return min_Diff;
}

// driver function
int main(){
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	while (t--)
	{
		int n;
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		
		vector<int> a;
		cout << "Enter the elements into the array : ";
		for (int i=0;i<n;i++)
		{
			int num;
			cin >> num;
			a.push_back(num);
		}
		
		int students;
		cout << "Enter the number of students : ";
		cin >> students;
		
		int output = chocolateDistribution (a, n, students);
		
		cout << "The minimum difference is : " << output << endl;
	}
	return 0;
}
