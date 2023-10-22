#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<bool> Sieve(int n)
{
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    // check from 2 to n-1
    for (int i = 2; i * i < n; i++)
    {
        if (sieve[i] == true)
        {
            int j = i * i;
            while (j <= n)
            {
                sieve[j] = false;
                j += i;
            }
        }
    }
    return sieve;
}

vector<bool> segSieve(int L,int R){
    vector<bool> sieve = Sieve(sqrt(R));
    vector<int> basePrimes;
    for(int i=0; i<sieve.size(); i++){
        if(sieve[i]){
            basePrimes.push_back(i);
        }
    }

    vector<bool> segmentSieve(R-L+1,true);
    if(L == 0 || L == 1){
        segmentSieve[L] = false;
    }

    for(auto prime : basePrimes){
        int firstMul = (L/prime) * prime;
        if(firstMul < L){
            firstMul += prime;
        }
        int j = max(firstMul,prime*prime);
        while(j <= R){
            // index 0 -> 110
            // index 1 -> 111
            segmentSieve[j-L] = false;
            j += prime;
        }
    }
    return segmentSieve;
}
int main()
{
    int L =110;
    int R =130;
    vector<bool> ss = segSieve(L,R);
    for(int i =0; i<ss.size(); i++){
        if(ss[i]){
            cout << i+ L << " ";
        }
    }

    return 0;
}
