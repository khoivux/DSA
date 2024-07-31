#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int const mod = 1e9 + 7;
   int n; cin >> n;
   int dp[n + 1] = {0};
   for(int i = 1; i <= 6; i++) dp[i] = 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= 6; j++)
        {
            if(i >= j) dp[i] += dp[i - j];
        }
        dp[i] %= mod;
    }
    cout << dp[7];
}

/*
***Note***
Với bài xét đến hoán vị ta dùng cách trên 14, 16
Với bài không xét hoán vị ta làm như 17
*/