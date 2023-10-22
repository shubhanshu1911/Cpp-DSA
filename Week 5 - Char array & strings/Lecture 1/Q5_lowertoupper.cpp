#include<iostream>
using namespace std;
#include<string.h>

void lowertIntoUpper(char arr[]){
    int n=strlen(arr);
    for(int i =0;i<n;i++){
        arr[i] = arr[i] -'a'+'A';
    }
}

void upperIntoLower(char arr[]){
    int i=0;
    int n=strlen(arr);
    for(int i =0;i<n;i++){
        arr[i] = arr[i] -'A'+'a';
    }
}
int main(){
    char arr1[100] = "ishan";
    char arr2[50] = "SHUBHANSHU";
    // converting lower case to upper case 
    lowertIntoUpper(arr1);
    cout << arr1 <<endl;

    // converting upper case to lower case 
    upperIntoLower(arr2);
    cout<<arr2<<endl;

}