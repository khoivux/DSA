#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n;
    int a[n + 69];
    int dp[n + 69];
    for(int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        cin >> a[i];
    }
    int res = -1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            if(a[i] > a[j])
            {
                dp[i] = max(dp[j] + 1, dp[i]);
                res = max(res, dp[i]);
            }
        }
    }
    cout << res;
}