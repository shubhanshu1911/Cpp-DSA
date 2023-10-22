#include<iostream>
using namespace std;

int fib(int n){
    // base case 1st and 2nd term
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    // RR -> f(n) = f(n-1) + f(n-2)
    int ans = fib(n-1) + fib(n-2);
    return ans;
}
int main(){
    int n;
    cin >> n;
    int ans = fib(n);
    cout << ans;  
    return 0;
}