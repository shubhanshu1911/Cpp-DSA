#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr{10,1,7,6,14,9};
    int n =arr.size();

    for(int round=1; round<n; round++){
        // step A : value ko fetch krlo 
        int val = arr[round];
        // step B : comparision 
        int j=round-1;
        for(;j>=0; j--){
            if(arr[j] > val){
                // shift
                arr[j+1] = arr[j];
            }    
            else{
                // rukna h 
                break;
            }
        }
        // step D : copy 
        arr[j+1] =val;
    }  

    // printing 
    for(auto ans : arr){
        cout << ans << " ";
    }
    return 0;
}