#include <bits/stdc++.h>
#define ll long long

using namespace std;

int dp[1000][1000] = {0};
int solve(int a, int b)
{
	if(a == b) return 0;
	if(dp[a][b] != 0) return dp[a][b];
	int res = 1e9;
	for(int i = 1; i < b; i++)
	{
		res = min(res, solve(a, b - i) + solve(a, i) + 1);
	}
	for(int i = 1; i < a; i++)
	{
		res = min(res, solve(a - i, b) + solve(i, b) + 1);
	}
	return dp[a][b] = res;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int a, b; cin >> a >> b;
	cout << solve(a, b);
}