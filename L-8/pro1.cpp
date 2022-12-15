#include<iostream>
using namespace std;

int fact(int num){
    int f=1;
    for(int i=1;i<=num;i++){
        f=f*i;
    }
    return f;
}

int nCr(int n,int r){
    int num=fact(n);
    int dem=fact(r) * fact(n-r);
    return num/dem;
}

int main(){
    int n,r;
    cin >>n>>r;
    cout<<"anser is "<<nCr(n,r)<<endl;
}