#include<iostream>
using namespace std;
int main (){
    int n;
    cin >>n;
    for(int row=0;row < n ; row++ ){
        if(row == 0 || row == n-1 ){
            for(int col=0 ; col < row+1 ; col++){
                cout << col+1 << " ";
            }
        }
        else {
            cout << "1 ";
            for(int col =1 ; col < row ; col ++){
                cout << "  ";
            }
            cout << row +1 << " ";
        }
        
        cout << endl;
    }
    cout << "Numeric hollow Inverted half  pyramid " <<endl;
    // Numeric hollow Inverted half  pyramid 
    for(int row=0;row < n ; row++ ){
        if(row == 0 ){
            for(int col=0 ; col < n - row ; col++){
                cout << col+1 << " ";
            }
        }
        else if( row == n-1){
            cout << row+1;
        }
        else {
            cout << row+1 << " ";
            for(int col =1 ; col < n-row-1 ; col ++){
                cout << "  ";
            }
            cout << n<< " ";
        }
        
        cout << endl;
    }
}