#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int t = n - k;
    if(k > t) swap(k, t);
    int a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    int s1 = 0, s2 = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i <= k) s1 += a[i];
        else s2 += a[i];
    }
    cout << s2 - s1;
}