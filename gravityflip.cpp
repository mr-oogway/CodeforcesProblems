#include <bits/stdc++.h>
// http://codeforces.com/contest/405/problem/A
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> a;
    for (int i = 0; i < n; ++i)
    {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i)
        cout << a[i] << ' ';
    return 0;
}