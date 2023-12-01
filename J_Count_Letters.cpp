#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int fa[26] = {0};

    for (char x : s)
    {
        fa[int(x) - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (fa[i] > 0)
        {
            cout << char(i + 'a') << " "
                 << ":"
                 << " " << fa[i] << endl;
        }
    }

    return 0;
}