#include <iostream>
using namespace std;
int main(){
    long n;
    cin >> n;
    while(n != 0){
        int rem = n % 10;
        cout << rem;
        n = n / 10;

    }
    cout << endl;
}