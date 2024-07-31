#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n;
    int a[n + 5] = {0};
    for(int i = 1; i <= n; i++) cin >> a[i];

    int dp1[n + 1], dp2[n + 1];
    dp1[1] = 1;
    dp2[n] = 1;

    int res = -1;
    for(int i = 2; i <= n; i++)
    {
        if(a[i] > a[i - 1])
            dp1[i] = dp1[i - 1] + 1;
        else 
            dp1[i] = 1;

        res = max(res, dp1[i]);
    }

    for(int i = n - 1; i >= 1; i--)
    {
        if(a[i] < a[i - 1])
            dp2[i] = dp2[i + 1] + 1;
        else 
            dp2[i] = 1;
    }

    // Xóa lần lượt từng phần tử
    for(int i = 2; i < n; i++)
    {
        if(a[i - 1] < a[i + 1])
        {
            res = max(res, dp1[i - 1] + dp2[i + 1]);
        }
    }
    cout << res;
}