  #include <bits/stdc++.h>
#define ll long long
/*
*/
using namespace std;
int n, m;
int a[1000][1000] = {0};
int fee[1000][1000] = {-1000000000};
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			fee[i][j] = a[i][j];
		}
	}

	for (int j = 1; j <= n; ++j)
	{
		for (int i = 1; i <= n; ++i)
		{
			int tmp = max(fee[i][j - 1], max(fee[i - 1][j - 1], fee[i + 1][j - 1]));
			fee[i][j] += tmp;
		}
	}
	int res = -1e9;
	for(int i = 1; i <= n; i++) res = max(res, fee[i][n]);
	cout << res;
}