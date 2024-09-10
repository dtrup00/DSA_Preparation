#include <bits/stdc++.h>
using namespace std;

int kadaneAlgo(vector<int> arr, int n)
{
    int sumContiguous = 0;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return arr[0];
    }

    for (int i = 0; i < n; i++)
    {
        if (sumContiguous + arr[i] < arr[i])
        {
            return sumContiguous;
        }
        else
        {
            sumContiguous += (arr[i]);
        }
    }
    return sumContiguous;
}

int main()
{
    vector<int> arr = {1, 2, 3, -2, 5};
    int arrSize = 5;
    cout << "Contiguous array sum is " << kadaneAlgo(arr, arrSize);
    return 0;
}