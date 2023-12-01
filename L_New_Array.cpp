#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> a;
    vector<int> c;
    vector<int> b;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    c.insert(c.begin(), b.begin(), b.end());
    c.insert(c.end(), a.begin(), a.end());
    for (int x : c)
    {
        cout << x << " ";
    }

    return 0;
}