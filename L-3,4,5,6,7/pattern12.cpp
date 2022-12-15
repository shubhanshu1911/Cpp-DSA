#include<iostream>
using namespace std;
int main(){
    int n,i=1,start=1;
    cin >>n;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<start;
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }
}


