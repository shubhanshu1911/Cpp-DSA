#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr{4,3,2,7,8,2,3,1}; 
    vector <int> num;
    for(int i=0; i<arr.size(); i++){
        
        int count = 1;
        for(int j=i+1; j<arr.size(); j++){
            
            if(arr[i] == arr[j]){
                count ++;
            }
            
        }
        if(count>1){
            num.push_back(arr[i]);
            
        }
    }
    for(auto val : num){
        cout << val << " ";
    }
    return 0;
}