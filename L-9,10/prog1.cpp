#include<iostream>
using namespace std;

int getmax(int arr[],int n){
    int maxi=INT_MIN;

    for(int i=0;i<n;i++)
        maxi = max(maxi, arr[i]); //max is the predefine funtion to find the maximum
    //     if(arr[i]>max)
    //         max=arr[i];
    // }
    return maxi;
}
int getmin(int arr[],int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
        mini = min(mini, arr[i]); //mini is the predefine funtion to find the minimum
    //     if(arr[i]<min)
    //         min=arr[i];
    // }
    return mini;
}
int main(){
    int size;
    cout << "Enter the size of array" <<endl;
    cin>>size;

    int arr[100];
    for(int i =0;i<size;i++)
        cin>>arr[i];
    cout << "maximum value is "<<getmax(arr,size)<<endl;
    cout << "minimum value is "<<getmin(arr,size)<<endl;

    return 0;
}