#include<iostream>
using namespace std;

void printArray(int arr[],int n, int i){
    // base case 
    if(i>=n){
        return;
    }

    // 1 case tum solve krdo 
    cout << arr[i] << " ";
    // baki sb recursion sambhal lega
    return printArray(arr, n, i+1);
}
int main(){
    int arr[5] = {10,20,30,40,50};
    int n =5;
    int i=0;

    printArray(arr,n,i);
    return 0;
}