#include<iostream>
using namespace std;
int main(){
    int i=1,n,sum=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"The sum is:"<<sum<<endl;
    
}