#include <iostream>
#include <vector>
using namespace std;

// function to reshape the matrix
vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c)
{
    vector<vector<int>> ans(r,vector<int>(c));
        
    int row=0 , col=0;
        
    if (mat.size()*mat[0].size() != r*c)
        return mat;
        
    for (int i=0; i<mat.size(); i++)
    {
        for (int j=0; j<mat[0].size(); j++)
        {
            ans[row][col] = mat[i][j];
            col++;
                
            if (col == c)
            {
                col = 0;
                row++;
            }
        }
    }
    return ans;
}

// driver method
int main ()
{
	int t;
	cout << "Enter the number of test cases : ";
	cin >> t;
	while (t--)
	{
		int n, m;
		cout << "Enter the number of rows and columns of the matrix : ";
		cin >> n >> m;
		
		// creating 2D matrix
		vector <vector<int>> mat(n,vector<int>(m));
		cout << "Enter the elements in the matrix : ";
		for (int i=0; i<n; i++)
		{
			for (int j=0; j<m; j++)
			{
				int num;
				cin >> num;
				mat[i][j] = num;
			}
		}
		
		int r, c;
		cout << "Enter the dimension in which you want to reshape the  matrix : ";
		cin >> r >> c;
		
		cout << endl;
		
		// calling the function
		vector<vector<int>> output = matrixReshape (mat, r, c);
		
		// printing the reshaped matrix
		cout << "Matrix after reshape : ";
		for (int i=0; i<output.size(); i++)
		{
			for (int j=0; j<output[0].size(); j++)
			{
				cout << output[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
