#include<iostream>
using namespace std;
void getPrime(int n){
    
    for(int count =1; count < n; count++){
        int prime=1;
        for(int i=2; i < n; i++){
            if(count % i == 0 && count != i){
                // non-prime
                prime = 0; 
                // break;
            }
        }
        if(prime == 1){
            cout << count << " is a prime number"<< endl; 
        }
    }
    
}
int main(){
    int n;
    cin >> n;
    getPrime(n);
}