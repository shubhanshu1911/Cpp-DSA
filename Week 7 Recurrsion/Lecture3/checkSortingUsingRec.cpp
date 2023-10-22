#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector <int>& v,int& n, int i){
    // base case 
    if(i == n-1){
        // qki pura array complete ho gaya or kahi bi false return nhi hua 
        return true;
    }

    if(v[i+1] <= v[i]){
        return false;
    }
    
    return checkSorted(v,n,i+1);
}
int main(){
    vector<int> v {10,20,30,40,80,60};
    int n = v.size();
    int i =0;
    bool isSorted = checkSorted(v,n,i);

    if(isSorted){
        cout << "Array is sorted" << endl;
    }
    else {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}