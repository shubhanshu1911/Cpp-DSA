#include<iostream>
#include<vector>
using namespace std;
int main(){
    // create vector
    vector<int>arr;


    cout << arr.size() <<endl;
    cout << arr.capacity() << endl;

    // insert
    arr.push_back(5);
    arr.push_back(6);

    // print
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // remove / delete
    arr.pop_back();

    vector<int>brr(10,-1);
}