#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, strRev = "";
    cin >> str;
    int len = str.length() - 1;
    for (int i = len; i >= 0; i--)
    {
        strRev += str[i];
    }

    int flag = 0;

    for (int i = 0; i <= len; i++)
    {
        if (str[i] != strRev[i])
        {
            flag = 1;
            break;
        }
    }


    flag == 0 ? cout << "Yes" : cout << "No";

    return 0;
}