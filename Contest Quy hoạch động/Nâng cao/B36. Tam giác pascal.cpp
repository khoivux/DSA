#include <bits/stdc++.h>
#define ll long long

using namespace std;

int mod = 1e9 + 7;
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n; cin >> n;
	int dp[n + 1][n + 1] = {0};
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			if(j == 1 || j == i) dp[i][j] = 1;
			else
			{
				dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
			}
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
}