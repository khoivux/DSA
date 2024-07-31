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
	int s = 0;
	for(int i = 1; i <= n; i++)
	{	
		cin >> a[i];
		s += a[i];
	}

	bool dp[s + 1];
	memset(dp, false, sizeof(dp));
	dp[0] = true;	
	for(int i = 1; i <= n; i++)
	{
		for(int j = s; j >= 1; j--)
		{
			if(j >= a[i])
			{
				dp[j] = (dp[j] || dp[j - a[i]]);
			}
		}
	}
	for(int i = 0; i <= s; i++) 
	{
		if(dp[i]) cout << i << " ";
	}
}