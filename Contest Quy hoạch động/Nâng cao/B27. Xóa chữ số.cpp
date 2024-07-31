#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n; cin >> n;
    int dp[n + 1];
    for(int i = 1; i <= 9; i++) dp[i] = 1;

    for(int i = 10; i <= n; i++)
    {
        int x = i;
        dp[i] = 1e9;
        while(x > 0)
        {
            dp[i] = min(dp[i], dp[i - (x % 10)] + 1);
            x /= 10;
        }
    }   
    cout << dp[n];
}