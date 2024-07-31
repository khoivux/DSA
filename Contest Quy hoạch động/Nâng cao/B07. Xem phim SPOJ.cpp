#include <bits/stdc++.h>
#define ll long long

using namespace std;

int dp[10000][10000];
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int C, N; cin >> C >> N;
    int w[N + 1];
    dp[0][0] = 0;
    for(int i = 1; i <= N; i++) cin >> w[i];

    for(int i = 1; i <= N; i++)
    {
        for(int j = 1; j <= C; j++)
        {
            if(j >= w[i])
                dp[i][j] = max(dp[i - 1][j - w[i]] + w[i], dp[i - 1][j]);
            else 
                dp[i][j] = dp[i - 1][j];
        }
    }
    cout << dp[N][C];
}