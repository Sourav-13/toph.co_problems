//Prob :(
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    char a[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> a[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (a[i][j] == '.')
            {
                if (a[i + 1][j] != '*' && a[i - 1][j] != '*' && a[i][j + 1] != '*' && a[i][j - 1] != '*')
                {
                    count++;
                    cout << i << "," << j << endl;
                }
            
            }
        }
    }
    cout << count;
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    char field[x][y];
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cin >> field[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (field[i][j] == '.') {
                bool check = true;

                if (i > 0 && field[i - 1][j] == '*') {
                    check = false;
                }

                if (i < x - 1 && field[i + 1][j] == '*') {
                    check = false;
                }

                if (j > 0 && field[i][j - 1] == '*') {
                    check = false;
                }

                if (j < y - 1 && field[i][j + 1] == '*') {
                    check = false;
                }

                if (check) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
