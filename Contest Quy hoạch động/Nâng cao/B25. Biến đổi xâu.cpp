#include <bits/stdc++.h>
#define ll long long

using namespace std;
/*
	
	Bài toán con s1 = gee, s2 = ges

	*BT1: 
	-> replace gee -> ges = 1
	ge -> ge = 0
	1 + 0 = 1

	*BT2: 
	-> delete gee -> ge = 1
	ge -> ges = 1	 
	1 + 1 = 2

	*BT3: 
	-> insert gee - > gees = 1
	gee -> ge = 1
	2

*/
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	string s1, s2;
	cin >> s1 >> s2;

	int n = s1.length(), m = s2.length();
	s1 = '0' + s1;
	s2 = '0' + s2;
	int dp[n + 1][m + 1];

	for(int i = 0; i <= n; i++) dp[i][0] = i;
	for(int i = 0; i <= m; i++) dp[0][i] = i;

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(s1[i] == s2[j]) 
				dp[i][j] = dp[i - 1][j - 1];
			else 
			{
				dp[i][j] = min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1;
			}
		}
	}
	cout << dp[n][m];
}