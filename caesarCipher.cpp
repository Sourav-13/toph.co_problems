#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    string str;
    // cin>>str;
    cin.ignore();
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        x = int(str[i]) - n;
        if (x < 97)
        {
            x += 26;
        }
        str[i] = char(x);
    }

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }

    return 0;
}