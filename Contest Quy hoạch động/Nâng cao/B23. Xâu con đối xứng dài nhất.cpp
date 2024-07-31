#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string s; 
    cin >> s;
    int n = s.length();
    s = '0' + s;

    bool dp[n + 1][n + 1];
    memset(dp, false, sizeof(dp));
    for(int i = 1; i <= n; i++) dp[i][i] = true;
    // dp[i][j] = dp[i + 1][j - 1]
    int res = 1;
    for(int len = 2; len <= n; len++)
    {
        for(int i = 1; i <= n - len + 1; i++)
        {
            int j = i + len - 1;
            if(s[i] == s[j] && dp[i + 1][j - 1]) 
                dp[i][j] = true;

            if(dp[i][j]) res = max(res, len);
        }
    }
    cout << res;
}