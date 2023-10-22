#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmpStr(char x, char y){
    // descending order
    return x > y;
}
int main(){
    string s = "ishan";
    sort(s.begin(),s.end(),cmpStr);
    cout << s << endl;
    return 0;
}