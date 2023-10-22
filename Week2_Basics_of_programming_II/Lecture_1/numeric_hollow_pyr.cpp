#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    // METHOD - 1 : 
    for(int row=0 ; row < n ; row++){
        // printing spaces 
        for(int col =0 ; col < n-row-1 ; col ++){
            cout << " ";
        }
        int start = 1;
        if(row == 0 || row == n-1){
            // printing stars and space togethor 
            for(int col =0 ; col < row+1 ; col ++){
                cout << start << " ";
                start ++;
            }
        }
        else {
            cout << "1";
            for(int col=0 ; col < 2*row-1 ; col++){
                cout << " ";
            }
            cout << row+1;

        }
        cout << endl;
    }

    // METHOD - 2
    for(int row=0 ; row < n ; row++){
        // printing spaces 
        for(int col =0 ; col < n-row-1 ; col ++){
            cout << " ";
        }
        // printing numebr and spaces togethor 
        int start = 1;
        for(int col=0; col < 2*row+1 ; col ++){
            if(row == 0  || row == n-1){
                if(col % 2 == 0){
                    cout << start;
                    start++;
                }
                else {
                    cout << " ";
                }
            }
            else {
                // first column
                if(col == 0){
                    cout << "1";
                }
                // last column
                else if( col == 2*row){
                    cout << row+1;
                }
                else {
                    cout << " ";
                }
            }
        }
        cout <<endl;
    }
}