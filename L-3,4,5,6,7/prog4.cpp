#include <iostream>
using namespace std;
int main()
{
    int n, i = 2, prime = 1;
    cout << "Enter the value of n" << endl;
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            prime = 0;
        }
        else if(n%i!=0){
            prime = 1;
        }
        i++;
    }
    if (prime == 1)
    {
        cout << "It is a prime number" << endl;
    }
    else if (prime == 0)
    {
        cout << "It is not a prime number" << endl;
    }
}