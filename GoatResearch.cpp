#include <bits/stdc++.h>
using namespace std;
int getMaxLen(vector<string>);

int main()
{
    int n;
    cin >> n;
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string ss;
        cin >> ss;
        // string input;
        // getline(cin, input); // Read the entire line, including spaces
        // cin.ignore();
        s.push_back(ss);
    }

    for (int i = 0; i < s.size(); i++)
    {
        string findA = s[i];
        int count = 0;
        for (int j = 0; j < s[i].size(); j++)
        {
            if (findA[j] == 'a')
            {
                count++;
            }
        }
        if (count == 1)
        {
            s[i].push_back('a');
        }
        else if (count % 2 == 0)
        {
            continue;
        }
        else
        {
            s[i].pop_back();
        }
    }
    int maxLen = getMaxLen(s);

    for (int i = 0; i < s.size(); i++)
    {
        int strLen = s[i].size();
        int addSpace = (maxLen - strLen) / 2;
        for (int j = 0; j < addSpace; j++)
        {
            s[i].insert(s[i].begin(), ' ');
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
    return 0;
}

int getMaxLen(vector<string> s)
{
    int maxLen = s[0].size();
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i].size() > maxLen)
        {
            maxLen = s[i].size();
        }
    }
    return maxLen;
}