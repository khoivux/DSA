#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
int used[1000];
int dp[1999][1999];
main()
{
    int n, S; cin >> n >> S;
 
    int a[n + 1];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i][0] = 1;
    }
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++)
    {

        for(int j = 1; j <= S; j++)
        {
            if(j >= a[i])
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i]];
            else 
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[n][S];
}