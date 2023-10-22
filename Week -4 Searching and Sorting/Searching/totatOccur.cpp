#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int firstOccur(vector <int> arr,int target){
    int start = 0;
    int end =  arr.size() -1;
    
    int mid = start + (end - start) / 2;
    int ans =-1;
    while( start <= end){
        if(arr[mid] == target){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid] > target){
            end = mid -1;
        }
        else if(arr[mid] < target){
            start = mid +1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOccur(vector <int> arr,int target){
    int start = 0;
    int end =  arr.size() -1;
    
    int mid = start + (end - start) / 2;
    int ans =-1;
    while( start <= end){
        if(arr[mid] == target){
            ans = mid;
            start = mid +1;
        }
        else if(arr[mid] > target){
            end = mid -1;
        }
        else if(arr[mid] < target){
            start = mid +1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main(){
    
    vector <int> arr{1,3,3,3,3,3,4,4,4,5};
    int target =4;
    
    int TotalOccur  = lastOccur(arr,target) - firstOccur(arr,target) +1;
    cout << TotalOccur;

    
    return 0;
}