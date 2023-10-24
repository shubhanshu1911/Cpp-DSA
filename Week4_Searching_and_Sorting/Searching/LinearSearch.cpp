#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5] = {1,3,5,7,9};
    int size = 5;
    int key;
    cout << "Enter the number to be found"<<endl;
    cin >> key;
    if(linearSearch(arr,5,key))
        cout << "Found";
    else {
        cout << "Not found";
    }
}