#include<iostream>
#include<vector>
using namespace std;

// ! We can send them as by reference as they are same and there is no need to make a new copy of it
void findAllLetterUsingRecursion(string& str,int i, int& n,char& key,vector <int>& ans){
    // base case 
    if(i>=n){
        return;
    }
    // * ek case aap solve krdo 
    if(str[i] == key){
        ans.push_back(i);
    }
    // * baki recurion sambhal lega   
    findAllLetterUsingRecursion(str,i+1,n,key,ans);
}
int main(){
    string str = "Shubhanshu";
    int n = str.length();
    int i=0;
    char key = 'u';
    vector<int> ans;
    // TODO : kabi meko kis chez me kis variable ko pass krrunga kis function ke andar to me usko pass reference krrunga
    findAllLetterUsingRecursion(str,i,n,key,ans);

    cout << "printing ans" << endl;
    for(auto val: ans){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}