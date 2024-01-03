#include<iostream>
using namespace std;
int main(){
    // creating pointer
    int a=5;
    int* ptr = &a;
    int* p = ptr;
    
    // access the value ptr is pointing to
    cout << *ptr << endl;

    return 0;
}