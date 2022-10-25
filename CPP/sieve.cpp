#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e6 + 5;

bool isPrime[maxn];

void sieve()
{
    for (int i = 1; i < maxn; i++)
    {
        isPrime[i] = true;
    }
    isPrime[1] = false;
    for (int i = 2; i * i < maxn; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < maxn; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
}

int main()
{
    sieve();
    cout << isPrime[5] << '\n'
         << isPrime[12345] << '\n';
}