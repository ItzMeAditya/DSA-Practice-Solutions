/*
Question :Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.
Union of the two arrays can be defined as the set containing distinct elements from both the arrays. 
If there are repetitions, then only one occurrence of element should be printed in the union.

Input:
5 3
1 2 3 4 5
1 2 3
Output: 
5
Explanation: 
1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.
*/

#include <iostream>
using namespace std;

// function to find union
int doUnion(int a[], int n, int b[], int m)  
{
    int count = 0,Union = 0;
    if (n > m)
    {
        for (int i=0 ; i<m ; i++)
        {
        	for (int j=0;j<n;j++){
        		if (b[i] == a[j] )
            	{
                	count++;
            	}
			}
        }
        int diff = m-count;
        Union = n+diff;
    }else{
        for (int i=0 ; i<n ; i++)
        {
        	for (int j=0;j<m;j++){
        		if (a[i] == b[j] )
            	{
                	count++;
            	}
			}
        }
        int diff = n-count;
        Union = m+diff;
    }
    return Union;
}

// driver method
int main ()
{
	int n,m;
	cout << "Size of n and m : ";
	cin >> n >> m;
	
	int a[n], b[m];
	
	for (int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	for (int i=0;i<m;i++)
	{
		cin >> b[i];
	}	
	
	int count = doUnion (a,n,b,m);
	
	cout << "Union : " << count <<endl;
	return 0; 
}
