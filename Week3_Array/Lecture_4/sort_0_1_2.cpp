#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> nums{1,2};
    vector <int> nums0,nums1,nums2;

    for(int i=0; i<nums.size(); i++){
        if(nums[i]==0){
            nums0.push_back(nums[i]);
        }
        else if(nums[i]==1){
            nums1.push_back(nums[i]);
        }
        else{
            nums2.push_back(nums[i]);
        }
    }
    int i=0;
    while(i<nums.size()){
        for(int j=0; j<nums0.size(); j++){
            nums[i]=nums0[j];
            i++;
        }
        for(int k=0; k<nums1.size(); k++){
            nums[i]=nums1[k];
            i++;
        }
        for(int l=0; l<nums2.size(); l++){
            nums[i]=nums2[l];
            i++;
        }
    }
    // print 
    for(auto val : nums){
        cout << val << " ";
    }
    return 0;
}