#include <bits/stdc++.h>
#define ll long long

using namespace std;

int dp[1000000] = {0};
int mod = 1e9 + 7;
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n; cin >> n; 
	int sum = 0;
	for(int i = 1; i <= n; i++)
	{
		sum += i;
	}
	dp[0] = 1;
 	sum /= 2;

 	int res = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = sum; j >= 1; j--)
		{
			if(j >= i)
			{
				dp[j] += dp[j - i];

				if(i == n && j ==  sum)
					res = dp[j - i];
			}
			dp[j] %= mod;
		}
	}
	cout << res;
}