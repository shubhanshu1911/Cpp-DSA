#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin >> n;
    while(i <= n){
        // space print krlo
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }
        // star print krlo
        int j=1;
        while(j<=i){
            cout <<"*";
            j++;
        }
        i++;
        cout <<endl;
    }

}