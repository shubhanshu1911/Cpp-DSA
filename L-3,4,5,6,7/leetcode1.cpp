#include <iostream>
using namespace std;
class solution
{
public:
    int output(n)
    {
        int p = 1, sum = 0;
        while (n != 0)
        {
            int digit = n % 10;
            p = p * digit;
            sum = sum + digit;
            n = n / 10;
        }
        int ans=p-sum;
        return ans;
    }
}; 
int main()
{
    int n;
    cin >> n;
    int result = solution(n);
    cout << result << endl;
}