#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    
    int mid = start + (end - start) / 2;

    while (start <= end){
        int element = arr[mid];
        if(target == element){
            return mid;
        }
        else if(target > element){
            start = mid +1;
        }
        else {
            end = mid -1;
        }
        mid = start + (end - start) / 2;
    }
    // element not found
    return -1;
}
int main(){

    int arr[] = {2,4,6,8,10,12,16};
    int size = 7;
    int traget = 10;

    int index = binarySearch(arr,size,traget);
    if(index == -1){
        cout << "target not found";
    }
    else {
        cout << "target found at " << index;

    }

    // Method -2 : Using STL fucntions

    // on vector 
    vector <int> v{1,2,3,4,5};
    
    if(binary_search(v.begin(), v.end(), 5))
    {
        cout << "target found";
    }
    else {
        cout << "target not found";
    }
    
    // on array
    int arr[] = {1,2,3,4,5,6,7};
    int size =7;

    if(binary_search(arr,arr+size,7)){
        cout << "target found";
    }
    else {
        cout << "target not found";
    }
    return 0;
}