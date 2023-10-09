#include <bits/stdc++.h>
using namespace std;
void checkCarry(int, int);

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    if (n1 <= n2)
    {
        checkCarry(n1, n2);
    }
    else
    {
        checkCarry(n2, n1);
    }
    return 0;
}

void checkCarry(int n1, int n2)
{
    while (n1 != 0)
    {
        int num1 = n1 % 10;
        n1 = n1 / 10;
        int num2 = n2 % 10;
        n2 = n2 / 10;
        int carry = num1 + num2;
        if (carry >= 10)
        {
            cout << "Yes";
            return;
        }
    }
    cout << "No";
}
/*
int x = 182, y = 243;
string str1 = to_string(x), str2 = to_string(y);
int size;
if (str1.size() >= str2.size())
{
    size = str1.size();
}
else
{
    size = str2.size();
}
for (int i = 0; i < size; i++)
{
    int x = int()
    int y =
}
*/
// string str1 = "12345678", str2 = "11";
// // cin >> str1 >> str2;
// int size = str1.size();
// if (str1.size() >= str2.size())
// {
//     size = str2.size();
// }
// cout<<size<<endl;
// for (int i = size - 1; i >= 0; i--)
// {
//     int num1 = int(str1[i]) - 48;
//     int num2 = int(str2[i]) - 48;
//     cout<<num1<<" "<<num2<<endl;
//     int carry = num1 + num2;

//     if (carry >= 10)
//     {
//         cout << "Yes";
//         return 0;
//     }
// }
// cout << "No";

// return 0;
