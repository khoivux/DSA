#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;
int a[199], b[199];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];

    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    ll res = 0;
    for(int i = 1; i <= n; i++)
        res += a[i] * b[i];

    cout << res;
}