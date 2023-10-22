#include <iostream>
using namespace std;
int main (){
   
    int n = -2;
    int ans =0;
    while (n != 0){
        if(n & 1 ){
        // found one set bit
            ans ++;
        }
        // right shit n
        n = n >> 1; 
    } 
    cout << "number of set bits "<<ans << endl; 
}