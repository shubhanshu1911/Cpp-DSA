#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    for(int row=0 ; row < n ; row++){
        // 1st part
        // row 0 me star print krna h 
        if(row == 0){
            cout << "*"<<endl;
            
        }
        // forward counting 
        for(int col =0; col < row+1 ;col++){
            if(col==0){
                cout << "*";
            }
            // else {
                cout << col+1;
            // }
        }
        // reverse counting 
        for(int col=row ; col >=0 ;col --){
            if(col==0){
                cout << "*";
            }
            else {
                cout << col;
            }
            
        }
        cout << endl;
    }

    // 2nd part
    for(int row=1 ; row < n; row++){
        // forward counting
        for (int col = 0; col < n - row; col++)
        {
            if (col == 0)
            {
                cout << "*";
            }
            else
            {
                cout << col;
            }
        }
        // reverse counting
        for (int col = n-row; col >= 0; col--)
        {
            if (col == 0)
            {
                cout << "*";
                // break;
            }
            else
            {
                cout << col;
            }
        }
        cout << endl;
        // last row me star print krna h 
        if(row == n-1){
            cout << "*";
        }
    }
}

