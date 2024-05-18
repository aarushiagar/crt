// Second largest element in arary in  O(n) time complexity in cpp
#include <bits/stdc++.h>
using namespace std;
int secondLargest(int arr[], int n)
{
    int max = arr[0];
    int secondMax = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i]; 
        }
    }
    return secondMax;
}
int main()
{
    int arr[] = {12, 13, 1, 10, 34, 16 ,36, 36,32};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The second largest element is " << secondLargest(arr, n);
    return 0;
}
