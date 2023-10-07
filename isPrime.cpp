#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 2; i < n - 1; i++)
    {
        if (n == 0 && n == 1)
        {
            cout << "No";
            return 0;
        }

        if (n % i == 0)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}