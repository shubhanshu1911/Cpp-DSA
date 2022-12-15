/* This question is about find a unique number in an array whose length is n(n=2m+1=odd) where m means yese m number h jo twice baar aayege array me.
 Example: let m=3(3,7,2);n=7
            arr=3,7,2,2,7,3,4 therefore 4 is unique.
 link for the question is :  https://bit.ly/3y01Zdu 
*/ 

/* method 1 --> haar number ki frequency nikalo aur jo bi number ki freq  = 1 aaye vo unqiue number hoga
                {NOT A OPTIMIS SOLUTION FOR THE PROBLE DUE TO TIME COMP IS HIGH}
*/
#include<iostream>
using namespace std;
void takearray(int arr[],int n ){
        for(int i=0;i<n;i++)
            cin>>arr[i];
}
int main(){
    int arr[20],n;
    cin>>n;
    takearray(arr,n);
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
                count++;
        }
        cout<<"The count of number"<<arr[i]<<" "<<count<<endl;
        if(count==1){
            cout<<"The unique number is :"<<arr[i];
            break;
        }
    }
} 
/* method -2 --> XOR method: a^a=0,a^0=a
                example arr=2,3,1,6,3,6,2
                        2^3^1^6^3^6^2
                        0^0^0^1=1
                SOLUTION : https://www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTab=1
*/ 