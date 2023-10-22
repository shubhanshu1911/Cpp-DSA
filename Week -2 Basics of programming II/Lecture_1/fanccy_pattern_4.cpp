#include<iostream>
using namespace std;
int main(){
    int n,count=0,col;
    cin >> n;
    // 1st half 
    for(int row=0 ; row<n ;row++ ){
        for(col =0; col< row+1 ; col++){
            count++;
            cout << count;
            // not a last character
            // 1 2 3 ... m -> last number m
            // 0 1 2 3 ... m -> last number m-1
            if(col != row){
                cout << "*";
            }
        }
        cout<<endl;
    }
    cout << count <<endl;
    count = count - (col-1);
    cout << count <<endl;
    // 2nd half
    for(int row=0 ; row<n ;row++ ){
        for(int col = 0; col < n-row ; col++){
            cout << count;
            // not a last character 
            // 1 2 3 ... m -> last number m
            // 0 1 2 3 ... m -> last number m-1
            if(col != n-row-1){
                cout << "*";
            }
            count++;

        }
        cout<<endl;
    }

}