#include <iostream>
#include <vector>
using namespace std;

// ! This function finds mininum number of elements required to reach the target
int findNegSum(vector<int> &arr, int target)
{
    // base case
    if (target == 0)
    {
        // Element can be created i.e 0 coin banana h to 0 hi rakhdo
        return 0;
    }
    if (target < 0)
    {
        // Negative paise ban hi nhi sakte i.e infinite coins lag gaye
        return INT_MAX;
    }
    
    int miniEle = INT_MAX;
    // solveing 1 case
    for (int i = 0; i < arr.size(); i++)
    {
        // call for each element of array
        int ans = findNegSum(arr, target - arr[i]);
        if (ans != INT_MAX)
            miniEle = min(miniEle, ans + 1);
    }

    return miniEle;
}

int findPosSum(vector<int>& arr, int target,int output){
    // base case 
    if(target == output){
        return 0;
    }
    if(output > target)
        return INT_MAX;
    
    int miniEle = INT_MAX;
    // 1 Case app solve krdo 
    for(int i=0; i<arr.size(); i++){
        int ans = findPosSum(arr, target, output+arr[i]);
        if (ans != INT_MAX)
            miniEle = min(miniEle, ans + 1);
    }
    return miniEle;
}

int main()
{
    vector<int> arr{1, 2,3};
    int target = 7;
    int output = 0;
    int ans1 = findNegSum(arr, target);
    cout << "Answer using negative direction : " << ans1 << endl;

    int ans2 = findPosSum(arr, target,output);
    cout << "Answer using positive direction : " << ans2 << endl;
    return 0;
}