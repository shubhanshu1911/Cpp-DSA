#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;
    while (i != end)
    {
        if (arr[i] > 0)
        {
            swap(arr[end], arr[start]);
            i++;
            end--;
            start++;
        }
        else if(arr[i]<0)
        {
            swap(arr[start], arr[i]);
            start++;
            i++;
        }
    }
    for (auto val : arr)
    {
        cout << val << " ";
    }
}


