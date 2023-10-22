#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    // Solid Square 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout << "hollow square"<<endl;
    // hollow square 
    for(int row = 0 ;row < n; row ++){
        if(row == 0 || row == n-1){
            for(int col =0 ; col < n ; col++ ){
                cout << "* ";
            }
        }
        else {
            // first star 
            cout << "* ";
            // remaining spaces 
            for(int col=0; col < n-2 ; col++){
            // if 1st or last position then star print hoga 
                cout<<"  ";
            }
            // last star 
            cout << "* ";
        }
        
        cout<<endl;
    }
    
    
}