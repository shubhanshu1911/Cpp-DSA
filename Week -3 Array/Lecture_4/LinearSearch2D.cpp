#include<iostream>
using namespace std;

bool LinearSearch(int arr[][3],int rows,int cols,int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][3]
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    if(LinearSearch(arr,3,3,12)){
        cout << "Present" << endl;
    }
    else {
        cout << "absent" <<endl;
    }
    return 0;
}