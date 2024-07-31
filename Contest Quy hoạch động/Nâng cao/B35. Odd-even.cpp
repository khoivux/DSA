#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n; cin >> n;
    int a[n + 1];

    int dp[10001]; // Lưu giá trị lẻ - chẵn tại i
    map<int, int> mp; // Lưu số lượng giá trị lẻ - chẵn
    mp[0] = 1;
    int even = 0, odd = 0;
    int res = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(a[i] % 2) odd++;
        else even++;

        dp[i] = odd - even;
        res += mp[dp[i]];
        mp[dp[i]]++;
    }
    cout << res;
}