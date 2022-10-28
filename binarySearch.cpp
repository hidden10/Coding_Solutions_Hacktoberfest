#include <bits/stdc++.h>
using namespace std;

// function for binary search
int binarySearch(vector<int> &arr, int target)
{
    int n = arr.size();
//     initialize low to start and high to last element of array
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
//         calculate mid element index
        int mid = low+(high-low) / 2;
        
//         if mid = target return the index
        if (arr[mid] == target)
            return mid;
        
//         if mid index element is less than target, then our element is on right part of arry
        else if (arr[mid] < target)
            low = mid + 1;
        
        
//         if mid index element is greater than target, then our element is on left part of arry
        else
            high = mid - 1;
    }
    
//     if elemennt is not found return -1
    return -1;
}

int main()
{
    int n;
//     take n as input 
    cin >> n;
    
//     create a vector to input the array
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
//         input all the elements of array
        cin >> arr[i];
    int target;
//     input target
    cin >> target;
    int idx = binarySearch(arr, n);
    
//     if idx=-1 element not present
    if (idx == -1)
        cout << "The element is not present\n";
//     if idx not -1 print the index
    else
        cout << "The element is present at index:" << idx << endl;
    return 0;
}
