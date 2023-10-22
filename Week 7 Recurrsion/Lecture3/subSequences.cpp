#include<iostream>
#include<vector>
using namespace std;

void findSubSequences(string& str, string output, int i,vector <string>& v){
    // base case 
    int n = str.length();
    if(i>=n){
        // cout << output << endl;
        v.push_back(output);
        return;
    }

    // Exclude 
    findSubSequences(str, output, i+1,v); 

    // Include 
    output.push_back(str[i]);
    findSubSequences(str , output, i+1,v);
}
int main(){
    string str = "abc";
    string output = "";
    int i =0;
    vector <string> v;
    findSubSequences(str,output,i,v);

    for(auto val : v){
        cout << val << " ";
    }
    return 0;
}