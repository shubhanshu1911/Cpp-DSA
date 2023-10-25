#include<iostream>
#include<string.h>
using namespace std;

void reveserstring(char name[]){
    int i=0;
    int n=strlen(name);
    int j=n-1;
    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }

}
int main(){
    char name[100];

    cin>>name;

    cout << "intilally : " << name <<endl;

    reveserstring(name);
    
    cout<<"finally : " << name <<endl;
}