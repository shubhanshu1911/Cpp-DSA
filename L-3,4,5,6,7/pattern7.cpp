#include<iostream>
using namespace std;
int main(){
    int n,i=0;
    cin >> n;
    while(i <= n){
        int j=0;
        while(j<=i){
            cout <<i+1<<" ";
            j++;
        }
        i++;
        cout <<endl;
    }

}