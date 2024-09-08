//  You are given a matrix grid where grid[i] is either a 0(representing water) or 1(representing land).

//  An island is defined as a group of 1's connected horizontally
//  or vertically.You may assume all four edges of the grid are surrounded by water.

//  The area of an island is defined as the number of cells within the island.

//  Return the maximum area of an island in grid.If no island exists, return 0.

// Input : grid = [
//     [ 0, 1, 1, 0, 1 ],
//     [ 1, 0, 1, 0, 1 ],
//     [ 0, 1, 1, 0, 1 ],
//     [ 0, 1, 0, 0, 1 ]
// ]

// Output : 6

#include <bits/stdc++.h>
using namespace std;

int dfs(int rowIt, int colIt, int numRows, int numCols, vector<vector<int>> &matrix)
{
    if (rowIt < 0 || colIt < 0 || rowIt >= numRows || colIt >= numCols || matrix[rowIt][colIt] != 1)
        return 0;

    matrix[rowIt][colIt] = 0;

    return 1 + dfs(rowIt + 1, colIt, numRows, numCols, matrix) + dfs(rowIt, colIt + 1, numRows, numCols, matrix) + dfs(rowIt - 1, colIt, numRows, numCols, matrix) + dfs(rowIt, colIt - 1, numRows, numCols, matrix);
}

int maxAreaOfIsland(vector<vector<int>> &arr)
{
    int rows = arr.size();
    int columns = arr[0].size();

    int maxArea = INT_MIN;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            maxArea = max(maxArea, dfs(i, j, rows, columns, arr));
        }
    }
    return maxArea;
}

int main()
{
    vector<vector<int>> arr = {
        {0, 1, 1, 0, 1},
        {1, 0, 1, 0, 1},
        {0, 1, 1, 0, 1},
        {0, 1, 0, 0, 1}};

    cout << maxAreaOfIsland(arr);

    return 0;
}