#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr{1, 2 ,4 };
    vector <int> brr{2 ,4 ,6};
    vector <int> crr{1, 2 ,4 ,4 ,6};

    vector <int> ans;
    
    
    for(int i=0; i<arr.size(); i++){
        int element = INT_MIN;
        for(int j=0; j<brr.size(); j++){
            if(arr[i] == brr[j]){
                // MARK
                brr[j] = -1;
               element = arr[i];
            }   
        }
        for(int k=0; k<crr.size(); k++){
            if(element == crr[k]){
                if(element == crr[k+1]){
                    continue;
                }
                ans.push_back(element);
            }
        }
    }
    

    // print ans 
    for(auto value : ans){
        cout << value << " ";
    }

}