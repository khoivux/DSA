#include <bits/stdc++.h>
#define ll long long

using namespace std;
int mod = 1e9 + 7;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n;
    int a[n + 1][n + 1];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            char c; cin >> c;
            if(c == '.') a[i][j] = 1;
            else a[i][j] = 0;
        }
    }
    int dp[n + 1][n + 1];
    dp[1][1] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == 1) dp[i - 1][j] = 0;
            if(j == 1) dp[i][j - 1] = 0;

            if(a[i][j] == 1)
            {
                dp[i][j] = dp[i - 1][j] % mod + dp[i][j - 1] % mod;
                dp[i][j] %= mod;
                if(i == 1 && j == 1) dp[i][j] = 1;
            }
            else dp[i][j] = 0;
        }
    }
    cout << dp[4][4];
}