/* This question is find a duplicate number in a array of size N, aur jisme 1 se N-1 tak ke number atleast 1 baar to aayege hi 
    Example: let n=5,arr[1,4]
            arr=1,2,3,4,3 therefore 3 is dulicate.
    link for the question is : https://bit.ly/3dm6bdZ 
*/
/* method 1 --> haar number ki frequency nikalo aur jo bi number ki freq  = 2 aaye vo duplicate number hoga
                {NOT A OPTIMIS SOLUTION FOR THE PROBLE DUE TO TIME COMP IS HIGH}
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int arr[50];
    cout << "Enter the size of array" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // cout << "Enter the value" << i<<endl;
        cin >> arr[i];
    }
    // sort(arr1, arr1 + (n));
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        int ele = arr[i];
        for (int j = 0; j < n; j++)
        {
            if (ele == arr[j])
            {
                count++;
            }
        }
        // cout << "Count of" << arr[i] << " " <<count << endl;
        if(count!=1){
            cout<<"The duplicate number is " << arr[i] <<endl;
            break;
        }
    }
}
/* Method-2 --> koi ek array h [1|2|3|....|X|....|N-1|X], iskko XOR krdo [1|2|3|....|X|....|N-1] jisse only X bachega baki sb cancel ho jayega
                SOLUTION : https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=1
*/