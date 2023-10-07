#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int n1 = 0, n2 = 1, fib = 0;
    // int a[n + 1];
    // a[0] = 1;
    // a[1] = 1;
    // for (int i = 2; i < n+1; i++)
    if (n == 0 || n == 1)
    {
        cout << 1;
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        fib = n1 + n2;
        n1 = n2;
        n2 = fib;

        //  a[i] = a[i - 1] + a[i-2];
    }
    // cout << a[n] << endl;
    cout << fib;

    return 0;
}