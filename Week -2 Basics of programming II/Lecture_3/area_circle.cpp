#include<iostream>
using namespace std;

void getPrime(int n){
    cout << "inside the function"<<endl;
    int count =1;
    for(int i=2 ; i< n ; i++){
        cout << "value of count is :" << count << endl;
        cout << "value of i is : " << i <<endl;
        if(count % i == 0){
            // not prime 
            cout << count << "not a prime number" <<endl;
        }
        // else{
        //     // prime
        //     cout << count << endl;
        // }
        count ++;
    }
    
}
int main (){
    int n;
    cin >> n;
    
    getPrime(n);
    
}