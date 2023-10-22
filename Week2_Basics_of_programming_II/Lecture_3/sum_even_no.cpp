#include<iostream>
using namespace std;

int getEvenSum(int n){
    cout << "inside getEvenSum funtion" << endl;
    cout << "Value of n is " << n << endl;

    int sum=0;
    cout << "Intial value of sum is : " << sum << endl;

    for(int i=0 ; i <= n ; i=i+2){
        cout << "For value of i : " << i <<endl;
        sum =sum +i;
        cout << "Sum now becomes : " << sum <<endl;
    }
    cout << "Returning sum = " <<sum <<endl;
    return sum;
}
int main (){
    int n ;
    cin >> n;

    cout << "Calling getEvenSum funtion" << endl;
    int evenSum = getEvenSum(n);
    cout << evenSum;   
}