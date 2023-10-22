#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> v{10,1,7,6,14,9};
    int n =v.size();

    sort(v.begin(),v.end());

    for(auto ans : v){
        cout << ans << " ";
    } kw

    return 0;
}