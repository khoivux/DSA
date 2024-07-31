#include <bits/stdc++.h>
#define ll long long

using namespace std;

int dp[1000][1000] = {0};
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
			cin >> a[i][j];
			dp[i][j] = a[i][j];
		}
	}	
	for(int i = 2; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			dp[i][j] = max({dp[i - 1][j], dp[i - 1][j - 1], dp[i - 1][j + 1]}) + dp[i][j];
		}
	}
	int res = -1;
	for(int i = 1; i <= n; i++)
	{
		res = max(res, dp[n][i]);
	}
	cout << res;
}