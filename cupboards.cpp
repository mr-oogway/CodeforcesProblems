#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int res = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (b != a)
            res++;
    }
    cout << res;
    return 0;
}