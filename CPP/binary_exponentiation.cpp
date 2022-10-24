#include <bits/stdc++.h>

using namespace std;

// change MOD if necessary
const int MOD = 1e9 + 7;

int binary_expo(int num, int power)
{
    int res = 1;
    while (power)
    {
        if (power & 1)
            res = (res * num) % MOD;
        power /= 2;
        num = (num * num) % MOD;
    }
    return res;
}

int main()
{
    int num = 5;
    int power = 5;
    cout << (binary_expo(num, power));
}