#include<iostream>
using namespace std;
void printDigit(int n){
    // * base case 
    if(n==0){
        return;
    }
    // * baki recursion sambhal lega 
    printDigit(n/10);

    // * 1 Case aap solve krdo 
    int digit = n % 10;
    cout << digit << " ";


}
int main(){
    int n = 6407;
    // if(n==0){
    //     cout << 0 << " ";
    // }
    printDigit(n);
    return 0;
}