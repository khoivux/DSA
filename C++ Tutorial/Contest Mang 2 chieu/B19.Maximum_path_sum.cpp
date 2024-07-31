#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, m;
int a[1000][1000] = {0};
int fee[1000][1000] = {0};
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
			fee[i][j] = a[i][j];
		}
	}

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			int tmp = max(fee[i - 1][j], fee[i][j - 1]);
			fee[i][j] += tmp;
		}
	}
	cout << fee[n][m];
}