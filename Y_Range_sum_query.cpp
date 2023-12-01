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

    // cumulative sum
    for (int i = 1; i < n; i++)
    {
        v[i] += v[i - 1];
    }

    vector<int> p(q * 2);
    for (int i = 0; i < q * 2; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < q * 2; i += 2)
    {
        int start = p[i] - 1;
        int end = p[i + 1] - 1;
        int sum;
        if (start > 0)
        {
            sum = v[end] - v[start - 1];
        }
        else
        {
            sum = v[end];
        }
        cout << sum << endl;
    }
    // int s = sum(p[i], p[i + 1]);

    return 0;
}