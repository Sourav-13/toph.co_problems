#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 171 123 -> ,171,123
    int x;
    cin >> x;
    int num = x;
    int count = 0;
    string s = "";
    if (x == 0)  //last dhoka :)
    {
        cout << 0;
        return 0;
    }
    while (num != 0)
    {

        s += to_string(num % 10);
        num = num / 10;
        count++;
        if (count == 3 && num != 0) //first dhoka "num != 0" :)
        {
            s += ",";
            count = 0;
        }
    }
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}