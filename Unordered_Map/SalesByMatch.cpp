/*
Hackerrank problem

Question : There is a large pile of socks that must be paired by color. 
Given an array of integers representing the color of each sock, 
determine how many pairs of socks with matching colors there are.

Example : 

Input : n = 7
arr = [1,2,1,2,1,3,2]

Output : 2

Explanation : There is one pair of color 1 and one of color 2. There are three odd socks left, one of each color. The number of pairs is 2.
*/

#include <bits/stdc++.h>

using namespace std;

// function to calculate the number of pairs of socks with matching colors.
int sockMerchant(int n, vector<int> ar) {
    unordered_map<int,bool> umap;
    int count = 0;
    for (int i=0;i<n;i++)
    {
        if(umap[ar[i]]==true)
        {
            count++;
            umap[ar[i]] = false;
        }else{
        	umap[ar[i]] = true;
		}
    }
    return count;
}

// driver function
int main() {
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	while (t--)
	{
		int n;
		cout << "Enter the number of elements : ";
		cin >> n;
		vector <int> vec;
		cout << "Enter the elements : ";
		for (int i=0; i<n; i++){
			int num;
			cin >> num;
			vec.push_back(num);
		}
		
		int ans = sockMerchant(n, vec);
		
		cout << ans << endl;
	}
	return 0;
}
