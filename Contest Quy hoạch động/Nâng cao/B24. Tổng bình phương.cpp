#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n; cin >> n;
	int dp[10000];
	dp[0] = 0;
	dp[1] = 1;
	for(int i = 2; i <= n; i++)
	{
		int tmp = n;
		for(int j = 1; j <= sqrt(i); j++)
		{
			tmp = min(tmp, dp[i - (j * j)]) + 1;
		}
		dp[i] = tmp;
	}
	cout << dp[n];
}