#include<iostream>
using namespace std;
#include<string.h>

void replaceSpaces(char sent[]){
    int i =0;
    int n=strlen(sent);
    for(int i=0;i<n;i++){
        if(sent[i] == ' '){
            sent[i] = '@';
        }
    }
}
int main(){
    char sent[100];

    cin.getline(sent,50);


    replaceSpaces(sent);
    
    cout<<"finally : " << sent <<endl;
}