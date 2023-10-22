#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    // normal hollow diamond half
    for(int row=0 ; row < n ; row++){
        // spaces print
        for(int col =0; col < n-(row+1) ; col++){
            cout<<" ";
        }
        // star and spaces print
        for(int col=0; col < 2*row+1 ; col++){
            // if 1st or last position then star print hoga 
            if(col == 0 || col == 2*row){
                cout << "*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    // inverted hollow diadmond half 
    for(int row=0 ; row < n ; row++){
        // spaces print
        for(int col =0; col < row ; col++){
            cout<<" ";
        }
        // star and spaces print
        for(int col=0; col < 2*n-(2*row+1) ; col++){
            // if 1st or last position then star print hoga 
            if(col == 0 || col == 2*n - 2*row -2){
                cout << "*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
