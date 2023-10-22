#include <iostream>
using namespace std;
int main()
{
    int rowcount;
    int colcount;
    cin >> rowcount;
    cin >> colcount;

    for (int row = 0; row < rowcount; row=row+1)
    {

        // first row and last row
        if (row == 0 || row == rowcount-1)
        {
            for(int col=0;col < colcount;col++){
                cout << "* ";
            }
        }
        else
        {
            // remaining rows
            // first star
            cout << "* ";
            // spaces
            for (int i = 0; i < colcount-2; i++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}