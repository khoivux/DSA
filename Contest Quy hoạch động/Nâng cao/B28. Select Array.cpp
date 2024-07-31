#include <bits/stdc++.h>
#define ll long long

using namespace std;

int dp[1000][1000];
int mod = 1e9 + 7;
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, m; cin >> n >> m;
	int a[n + 1];
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	if(a[1] != 0)
		dp[1][a[1]] = 1;
	else 
	{
		for(int i = 1; i <= m; i++)
		{
			dp[1][i] = 1;
		}
	}

	for(int i = 2; i <= n; i++)
	{
		if(a[i] == 0)
		{
			for(int j = 1; j <= m; j++)
			{
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1];
				dp[i][j] %= mod;
			}
		}
		else 
		{
			dp[i][a[i]] = dp[i - 1][a[i] - 1] + dp[i - 1][a[i]] + dp[i - 1][a[i] + 1];
			dp[i][a[i]] %= mod;
		}	
	}
	int res = 0;
	for(int i = 1; i <= m; i++)
	{
		res += dp[n][i];
		res %= mod;
	}
	cout << res;

}