#include<iostream>
using namespace std;

// ! We have to pass maxi by reference, If you pass it by value then maxi will become a local variable for that function 
// ! and each and every time when function returns, maxi will be destoyed and same the orginal value will be answered
void findMaxUsingRecursion(int arr[],int n,int i,int &maxi){
    // base case 
    if(i>=n){
        return;
    }
    // ek case aap solve kr do 
    if(maxi < arr[i]){
        maxi = arr[i];
    }
    findMaxUsingRecursion(arr,n,i+1,maxi);
}

void findMinUsingRecursion(int arr[],int n,int i,int &mini){
    // base case 
    if(i>=n){
        return;
    }
    // ek case aap solve kr do 
    if(mini > arr[i]){
        mini = arr[i];
    }
    findMinUsingRecursion(arr,n,i+1,mini);
}

int main(){
    int arr[4] = {10,30,44,20};
    int n =4;
    int i=0;
    int maxi = INT_MIN; 
    int mini = INT_MAX;
    findMaxUsingRecursion(arr,n,i,maxi);
    cout << "Maximum is :" << maxi << endl;

    findMinUsingRecursion(arr,n,i,mini);
    cout << "Minimum is :" << mini ;


    return 0;
}