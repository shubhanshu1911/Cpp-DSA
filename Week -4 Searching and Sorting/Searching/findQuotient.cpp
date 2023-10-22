#include<iostream>
using namespace std;

int divide(int dividend, int divisor){
    int s =0;
    int e = abs(dividend);
    int mid = s +(e-s)/2;
    int ans=0 ;
    while(s <= e){
        if(abs(mid * divisor) == abs(dividend)){
            ans = mid;
            break;
        }
        if(abs(mid * divisor) > abs(dividend)){
            e = mid -1;
        }
        else {
            ans = mid;
            s =mid+1;
        }
        mid = s +(e-s)/2;
    }
    // checking about sign 
    if((divisor < 0 && dividend < 0) || (dividend > 0 && divisor > 0)){
        return ans;
    }
    else {
        return -ans;
    }
}
int main(){
    int dividend = 22;
    int divisor =7;

    int ans = divide(dividend,divisor);
    cout << ans << endl;

    int precision;
    cout << "Enter upto what digit you want" << endl;
    cin >> precision;

    double step =0.1;
    double finalAns = ans;

    for(int i =0; i<precision; i++){
        for(double j =finalAns; j*divisor<dividend; j=j+step){
            finalAns = j;
        }
        step = step/10;
    }
     cout << finalAns;
    return 0;
}