#include<iostream>
#include<string.h>
using namespace std;
int main(){
    // creating string 
    string str = "ishan";


    // Length 
    cout << "length : " << str.length() << endl;

    // empty 
    cout << "empty : " << str.empty() << endl;

    // push_back 
    str.push_back('A');
    cout << str<< endl;

    // pop_back 
    str.pop_back();
    cout << str<< endl;

    // substr 
    cout << str.substr(0,3)<<endl;

    // compare 
    string a = "love";
    string b = "lover";

    if(a.compare(b) == 0){
        cout << "both are same" << endl;
    }
    else{
        cout << "both not same are same" << endl;
    }

    // find 
    string sent = "hello jee kaise ho";
    // if(sent.find("every") == string :: npos){
    //     cout << "not found" << endl;
    // }
    cout << "find" << endl;
    cout << sent.find("hello") << endl;
    
    // replace 
    string str1 = "This is my first name";
    string word = "Ishan";

    str1.replace(0,4,word);
    cout << str1 << endl;

    // erase 
    string str2 = "ABCDEFGH";
    str2.erase(0,4);
    cout << str2;
    return 0;
}