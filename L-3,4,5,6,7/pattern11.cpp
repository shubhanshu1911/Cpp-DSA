#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin >> n;
    while(i <= n){
        int space =1;
        while(space<=i-1){
            cout<<" ";
            space++;
        }
        int j=1;
        int start=i;
        while(j<=n-i+1){
            cout <<start;
            start++;
            j++;
        }
        i++;
        cout <<endl;
    }

}