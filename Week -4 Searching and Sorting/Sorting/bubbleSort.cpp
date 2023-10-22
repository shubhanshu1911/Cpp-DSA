#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{10,1,7,6,14,9};
    int n = arr.size();

    // outer loop -> (n-1) rounds
    for(int round=1; round<n; round++){
        int swapcount = 0;
        //inner loop -> n-i-1 tak chlega
        for(int j=0; j<n-round; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapcount++;
            }
        }
        if(swapcount == 0){
            // sort ho chuka h, no need to check further rounds
            break;
        }
    }

    for(auto val : arr){
        cout << val << " ";
    }
    return 0;
}