#include <iostream>
#include <string.h>
using namespace std;

string strcpy(string s, string s2)
{
    for (int i = 0; i < s.length(); i++)
    {
        s2.push_back(s[i]);
    }
    return s2;
}
string reverseOnlyLetters(string s)
{
    string ans = "";
    int i = 0;
    int j = s.length() - 1;

    ans = strcpy(s, ans);
    cout << "copied string : " << ans << endl;
    while (i < j)
    {
        cout << "comapiring " << ans[i] << ans[j] << endl;
        if (ans[i] < 64 )
        {
            i++;
        }

        if (ans[j] < 64 )
        {
            j--;
        }
        

        if ((64<ans[i]<91 && 64<ans[j]<91) || (96<ans[i]<122 && 96<ans[j]<122))
        {
            cout << "swaped" << ans[i] << ans[j] << endl;
            swap(ans[i], ans[j]);
            i++;
            j--;
        }
        
        else
        {
            i++;
            j--;
        }
        
    }
    return ans;
}
int main()
{
    string s ="7_28]";
    cout << reverseOnlyLetters(s);
    return 0;
}