#include <bits/stdc++.h>
using namespace std;
void reverse_vector(vector<int> &v)
{
    int ln = v.size();
    for (int i = ln - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    reverse_vector(v);

    return 0;
}