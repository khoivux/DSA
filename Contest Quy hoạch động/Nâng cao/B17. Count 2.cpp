#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, s; cin >> n >> s;
    int a[n];
    int dp[s + 1][s + 1];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i][0] = 1;
    }
    dp[0][0] = 1;

    for(int i = 1; i <= s; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i - a[j] >= 0) dp[j][i] = max(dp[j - 1][i - a[j]], dp[j - 1][i]);
            else dp[j][i] = dp[j - 1][i];
        }
    }
    cout << dp[n][s];

}