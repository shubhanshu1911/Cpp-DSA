// A-Z-->65 to 90
// a-z -->97-122
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character" << endl;
    cin >> ch;
    if (ch > 65 && ch < 90)
    {
        cout << "It is a upper case" << endl;
    }
    else if (ch > 97 && ch < 122)
    {
        cout << "It is a lower case" << endl;
    }
    else
    {
        cout << "It is a special character" << endl;

    }
}