#include<iostream>
using namespace std;

void transpose(int arr[][3],int rows,int cols,int transArr[][3]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            transArr[j][i] = arr[i][j];
        }
    }
}
void printArr(int arr[][3],int rows,int cols){

    for(int i=0; i<rows; i++){
        // for every row, we need to print value in each column
        for(int j=0; j<cols; j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
} 
int main(){
    int arr[3][3]
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    int transArr[3][3];
    cout << "before transpose" <<endl;
    printArr(arr,3,3);
    transpose(arr,3,3,transArr);
    cout << "after transpose" <<endl;
    printArr(transArr,3,3);
    return 0;
}