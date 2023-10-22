#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int rows =3;
    int cols = 3;

    cout << "column-wise" <<endl;
    cout << "Enter the value" <<endl;
    // row-wise input 
    for(int i=0; i<rows; i++){
        // for every row, we need to print value in each column
        for(int j=0; j<cols; j++){
            cin >> arr[i][j];
        }
        cout << endl;
    }

    // row-wise print 
    for(int i=0; i<rows; i++){
        // for every row, we need to print value in each column
        for(int j=0; j<cols; j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
    cout << "column-wise" <<endl;
    // column-wise input 
    for(int i=0; i<rows; i++){
        // for every row, we need to print value in each column
        for(int j=0; j<cols; j++){
            cin >> arr[i][j];
        }
        cout << endl;
    }
    // column-wise print 
    for(int i=0; i<rows; i++){
        // for every row, we need to print value in each row
        for(int j=0; j<cols; j++){
            cout <<arr[j][i]<<" ";
        }
        cout << endl;
    }
    return 0;
}