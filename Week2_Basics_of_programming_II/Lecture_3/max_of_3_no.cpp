#include<iostream>
using namespace std;

int findMax(int a, int b, int c){
    if(a > b && b > c ){
        return a;
    }
    else if ( b > a && b > c){
        return b;
    }
    else {
    return c;
    }
}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int MaxNumeber = findMax(a,b,c);
    cout << MaxNumeber;

}