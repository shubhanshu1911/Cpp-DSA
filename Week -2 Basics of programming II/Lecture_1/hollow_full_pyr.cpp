#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int row=0;row < n ; row++ ){
        // printing spaces
        for(int j=0 ; j < n-(row+1) ; j++){
            cout << " ";
        }
        if(row == 0 || row == n-1){
            // printing stars and space togethor 
            for(int k =0 ; k<row+1 ; k++){
                cout << "* ";
            }
        }
        else {
            cout << "*";
            for(int col=0 ; col < 2*row-1 ; col++){
                cout << " ";
            }
            cout << "*";

        }
        
        cout << endl;
    }
}