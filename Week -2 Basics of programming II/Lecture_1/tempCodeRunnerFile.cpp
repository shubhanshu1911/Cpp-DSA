#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row < n; row++)
    {
        // forward counting
        for (int col = 0; col < n - row; col++)
        {
            if (col == 0)
            {
                cout << "*";
            }
            else
            {
                cout << col;
            }
        }
        // reverse counting
        for (int col = n-row; col >= 0; col--)
        {
            if (col == 0)
            {
                cout << "*";
                // break;
            }
            else
            {
                cout << col;
            }
        }
        cout << endl;
        if(row == n-1){
            cout << "*";
        }
    }
}