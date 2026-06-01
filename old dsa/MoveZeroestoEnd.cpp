#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// brute force
void moveZ(vector<int> &arr)
{
    int n = arr.size();
    vector<int> temp(n);
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            temp[j] = arr[i];
            j++; 
        }
    }
    arr = temp;
}
// optimal solution
vector<int> moveZeros(vector<int> &arr)
{
    int n = arr.size();
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        return arr;
    for (int i = j+1; i < n; i++)
    {
        if (arr[i] != 0) int n = arr.size();
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1)
        return arr;
    for (int i = j+1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}
//chatgpt
void moveZeros2(vector<int> &arr) {
    int j = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    vector<int> nums;
    nums = {1, 0, 2, 0, 3, 0, 4, 0, 5, 6, 7};
    moveZeros2(nums);
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}