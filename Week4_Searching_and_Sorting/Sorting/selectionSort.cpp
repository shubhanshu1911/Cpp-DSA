#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{5,4,3,2,1};
    int n = arr.size();

    // outer loop -> (n-1) rounds
    for(int i=0; i<n-1; i++){
        int minIndex = i;

        // inner loop -> idex of minimum element 
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }

    for(auto val : arr){
        cout << val << " ";
    }
    return 0;
}