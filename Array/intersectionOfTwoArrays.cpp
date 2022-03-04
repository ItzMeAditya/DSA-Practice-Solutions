#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// function to find the intersection of two arrays
vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{
    unordered_map <int,int> map;
    int n = nums1.size();
    int m = nums2.size();
        
    while (n>0)
    {
        if (map.count(nums1[n-1]) != 0){
            map[nums1[n-1]] = map.at(nums1[n-1])+1;
            n--;
        }else{
            map[nums1[n-1]] = 1;
            n--;
        }
    }
        
    vector<int> vec;
    for (int i=0;i<m;i++)
    {
        if (map.count(nums2[i]) != 0 and map.at(nums2[i]) > 0)
        {
            vec.push_back(nums2[i]);
            int freq = map.at(nums2[i]);
            freq--;
            map[nums2[i]] = freq;
        }
    }
    return vec;
}

// driver method
int main ()
{
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	cout << endl;
	while (t--)
	{
		int n, m;
		cout << "Enter the number of elements in the first array : ";
		cin >> n;
		
		vector<int> v1;
		cout << "Enter the "<< n << " elements in the first array : ";
		for (int i=0; i<n; i++)
		{
			int num;
			cin >> num;
			v1.push_back(num);
		}
		
		cout << "Enter the number of elements in the second array : ";
		cin >> m;
		
		vector<int> v2;
		cout << "Enter the "<< m << " elements in the second array : ";
		for (int i=0; i<m; i++)
		{
			int num;
			cin >> num;
			v2.push_back(num);
		}
		cout << endl;
		
		vector<int> output = intersection (v1, v2);
		
		cout << "Array after intersection of two arrays : ";
		for (int i=0; i<output.size(); i++)
		{
			cout << output[i] << " ";
		}
	}
	return 0;
}
