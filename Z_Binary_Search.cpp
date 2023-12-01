#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    vector<int> p(q);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> p[i];
    }
    // binary search
    int i = 0, j = n;
    while (i > j)
    {
        if (v[i])
            i++;
        j--;
    }
    return 0;
}