/* The question is sorted the given array [0|1|0|1|1|0] ki pure zero ek taraf or pure 1 ek taraf ho i.e [0|0|0|1|1|1]
NOTE - 1) while use krna ak reason h ki jab ye codition h tak krro 
       2) i<j agr baar check hoga 
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

void sortOne(int arr[],int n){
    int i=0;
    int j=n-1;
    int step =0;
    while(i<j){
        cout<<"step"<<step<<endl;
        printarray(arr,8);
        cout<<endl;
        while(arr[i]==0 && i<j){
            i++;
        }
        while (arr[j]==1 && i<j ){
            j--;
        }
        if (arr[i]==1 && arr[j]==0 && i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
       
        step ++;
    }
}

int main(){
    int arr[8] = {1,1,0,0,0,0,1,0};
    // printarray(arr,6);
    sortOne(arr,8);
    cout <<"Sorted array"<<endl;
    printarray(arr,8);
}