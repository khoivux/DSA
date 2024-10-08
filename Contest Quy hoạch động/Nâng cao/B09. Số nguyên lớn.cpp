#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	string N, M;
	cin >> N >> M;
	int n = N.length(), m = M.length();
	N = '0' + N;
	M = '0' + M;
	int dp[199][199] = {0};
	dp[0][0] = 0;

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(N[i] == M[j])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else 
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	cout << dp[n][m];
}