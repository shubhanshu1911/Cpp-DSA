#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int row=0 ; row < n ; row++){
        // 1st part 
        for(int col =0 ;col < n+3-row ; col ++){
            cout << "*";
        }
        // 2nd part
        for(int col =0; col< row+1 ; col++){
            cout << row+1;
            // not a last character
            // 1 2 3 ... m -> last number m
            // 0 1 2 3 ... m -> last number m-1
            if(col != row){
                cout << "*";
            }
        }
        // 3rd part
         // 1st part 
        for(int col =0 ;col < n+3-row ; col ++){
            cout << "*";
        }
        cout << endl;
    }
}