#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    int a[n + 1][m + 1];
    int dp[n + 1][m + 1] = {0};

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
           cin >> a[i][j];
        }
    }  
    int res= 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(a[i][j] == 1)
            {
                dp[i][j] = min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1;
                res = max(res, dp[i][j]);
            } 
            else dp[i][j] = 0;
        }
    }
    cout << res;
}