#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int space = n-1;
    for (int i = 0; i < n; i++)
    {
        for (int k = space; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
            if (j != i)
            {
                cout << " ";
            }
        }
        cout << endl;
        space--;
    }

    return 0;
}