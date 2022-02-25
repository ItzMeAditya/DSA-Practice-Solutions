/*
Question : The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.
You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.
For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. 
If there is no next greater element, then the answer for this query is -1.
Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.\


Input: nums1 = [2,4], nums2 = [1,2,3,4]
Output: [3,-1]
Explanation: The next greater element for each value of nums1 is as follows:
- 2 is underlined in nums2 = [1,2,3,4]. The next greater element is 3.
- 4 is underlined in nums2 = [1,2,3,4]. There is no next greater element, so the answer is -1.
*/


#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// function to find the next Greater Elements
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
	// creating a queue
    queue<int> q;
    // pushing array 1 all elements into the queue
    for (int i=0;i<nums1.size();i++)
    {
        q.push(nums1[i]);
    }
    
    // creating a vector to store the next greater elements
    vector<int> nextGreater;
    while (!q.empty())
    {
    	// taking out the front elements from the queue
        int front = q.front();
        q.pop();
        bool flag = false;
        
        // finding the next greater element
        for (int i=0;i<nums2.size();i++)
        {
            if (front == nums2[i])
            {
                if (nums2[i+1] > front)
        		{
            		nextGreater.push_back(nums2[i+1]);
            		flag = true;
            		break;
        		}
            }
        }
        // if not found pushing -1
        if (!flag)
        {
            nextGreater.push_back(-1);
        }
    }
    // returning the vector
    return nextGreater;
}

// driver method
int main ()
{
	// declaring variable
	int t;
	cout << "Enter number of test cases : ";
	cin >> t;
	while (t--)
	{
		int n1,n2;
		cout << "Enter the number of elements in both the array separated by space : ";
		// taking input from user
		cin >> n1 >> n2;
		
		// declaring two vectors
		vector<int> v1;
		vector<int> v2;
		
		// takign elements input from the user
		cout << "Enter array1 elements : ";
		for (int i=0;i<n1;i++)
		{
			int num1;
			cin >> num1;
			v1.push_back(num1);
		}	
		
		cout << "Enter array2 elements : ";
		for (int i=0;i<n2;i++)
		{
			int num2;
			cin >> num2;
			v2.push_back(num2);
		}
		
		// calling the function
		vector<int> output = nextGreaterElement (v1,v2);
		
		// printing the next greater elements
		for (int i=0;i<output.size();i++)
		{
			cout << output[i] <<" ";
		}
	}
	return 0;
}
