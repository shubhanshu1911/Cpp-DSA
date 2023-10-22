#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    cout << "This is full pyramid"<<endl;
    for(int row=0 ; row < n ; row++){
        // first printing spaces 
        for(int j=0 ; j < n-(row+1) ; j++){
            cout << " ";
        }
        // printing stars and space togethor 
        for(int k =0 ; k<row+1 ; k++){
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    // Inverted full pyramid
    cout << "This is Inverted full pyramid" << endl;;
    for(int row=0 ; row < n ; row++){
        // first printing spaces 
        for(int j=0 ; j < row ; j++){
            cout << " ";
        }
        // printing stars and space togethor 
        for(int k =0 ; k<n-row ; k++){
            cout << "* ";
        }
        cout << endl;
    }
}