// Q1) Alternate the next element of the array.
//     example 1,2,3,4,5 --> 2,1,3,5,4

#include <iostream>
#include <stdlib.h>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
void takearray(int arr[],int n ){
        for(int i=0;i<n;i++)
            cin>>arr[i];
}
int main(){
    int n,arr[20];
    cin>>n;
    takearray(arr,n);
    printarray(arr,n); 
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
    cout<<endl;
    printarray(arr,n);
}