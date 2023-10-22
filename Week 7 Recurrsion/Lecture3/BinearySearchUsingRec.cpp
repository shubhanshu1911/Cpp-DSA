#include<iostream>
#include<vector>
using namespace std;

int binarySearchUsingRecursion(vector <int>& arr, int s, int e, int& key){
    // base case 1 => invalid array  
    if(s>e){
        return -1;
    }
    
    int mid = (s+e)/2;
    
    // 1 case app solve krdo 
    if(arr[mid] == key)
        return mid;
    
    // baki recursion sambhal lega 
    if(arr[mid] < key){
        return binarySearchUsingRecursion(arr,mid+1,e,key);
    }
    else{
        return binarySearchUsingRecursion(arr,s,mid-1,key);
    }
}
int main(){
    vector<int> v {10,20,40,60,70,90,99};
    int key = 99;
    int n = v.size();
    int s = 0;
    int e = n-1;
    
    int ans = binarySearchUsingRecursion(v,s,e,key);
    cout << ans;
    return 0;
}