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

	ll res = 0;
	ll dp[n + 4];
	dp[0] = 0;

	for(int i = 1; i <= n; i++)
	{
		int x = s[i] - '0';
		dp[i] = dp[i - 1] * 10 + x * i;
		res += dp[i];
	}
	cout << res;
}