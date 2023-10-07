#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    int flag = 0;
    int len1 = str1.length(), len2 = str2.length();

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());


    if (len1 != len2)
    {
        cout << "No";
        return 0;
    }
    else
    {
        int j = 0;
        for (int i = 0; i < len1; i++)
        {
            if(str1[j] != str2[i])
            {
                flag = 1;
                break; 
            }
            j++;
        }
    }

    flag == 0 ? cout << "Yes" : cout << "No";

    return 0;
}