#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    // first half part 
    for(int row=0 ; row < n ; row++){
        // Half pyrmaid 
        for(int col=0 ; col < n-row ;col++){
            cout << "*";
        }
        // spaces wla full pyramid
        for(int col=0 ; col < 2*row+1 ; col++){
            cout << " ";
        }
        // half pyramid
        for(int col=0 ; col < n-row ;col++){
            cout << "*";
        }
        cout << endl; 
    }
    // 2nd half 
    for(int row=0 ; row < n ; row++){
        // Half pyrmaid 
        for(int col=0 ; col < row+1 ;col++){
            cout << "*";
        }
        // spaces wla full pyramid
        for(int col=0 ; col < 2*n-(2*row+1) ; col++){
            cout << " ";
        }
        // half pyramid
        for(int col=0 ; col < row+1 ;col++){
            cout << "*";
        }
        cout << endl; 
    }
}