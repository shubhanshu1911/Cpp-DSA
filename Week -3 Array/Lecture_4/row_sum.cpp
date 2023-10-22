#include<iostream>
using namespace std;

void printColWiseSum(int arr[][3],int rows,int cols){
    cout << "printing column-size sum" << endl;
    for(int i=0; i<rows; i++){
         int sum=0;
         for(int j=0; j<cols; j++){
            sum =sum +arr[j][i];
         }
         cout << sum << endl;
    }
}
void printRowWiseSum(int arr[][3],int rows,int cols){
    // row size -> row-wise traversal
    cout << "printing row-size sum" << endl;
    for(int i=0; i<rows; i++){
         int sum=0;
         for(int j=0; j<cols; j++){
            sum =sum +arr[i][j];
         }
         cout << sum << endl;
    }
}
int main(){
    int arr[3][3]
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    printRowWiseSum(arr,3,3);
    printColWiseSum(arr,3,3);
    return 0;
}