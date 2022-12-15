#include<iostream>
using namespace std;
void fib(int n){
    int n1=0,n2=1,sum=0;
    cout << n1 <<" " << n2;
    for(int i=2;i<n;i++){
        sum = n1+n2;
        cout << " "<<sum;
        n1=n2;
        n2=sum;
    }
}
int main(){
    int n;
    cin >>n;
    fib(n);
}