#include<iostream>
using namespace std;
int setbit(int n){
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main(){
    int a,b;
    cin>>a>>b;
    int set1= setbit(a);
    int set2= setbit (b);
    cout << "Total set bit in a and b is " << set1+set2<<endl;
} 