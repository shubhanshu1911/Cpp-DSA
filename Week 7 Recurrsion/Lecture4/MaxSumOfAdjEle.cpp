#include<iostream>
#include<vector>
using namespace std;

void maxSumOfAdjEle(vector<int>& v, int i, int sum, int& maxi){
    // base case 
    if(i>= v.size()){
        // maxi update 
        maxi = max(maxi,sum);
        return;
    }

    // include 
    maxSumOfAdjEle(v,i+2, sum+v[i], maxi);
    // exlcude 
    maxSumOfAdjEle(v,i+1, sum, maxi);
}
int main(){
    vector<int> v{2,1,4,9};
    int sum =0;
    int maxi = INT_MIN;
    int i=0;

    maxSumOfAdjEle(v, i, sum, maxi);

    cout << maxi << endl;
    return 0;
}