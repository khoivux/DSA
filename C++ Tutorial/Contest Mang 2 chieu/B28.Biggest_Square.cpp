#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a[1000][10000];
int n, m; 
ll pre[10000][1000];
ll res = -1;
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
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			pre[i][j] = pre[i][j - 1] + pre[i - 1][j] - pre[i - 1][j - 1] + a[i][j];
		}
	}
	for(int i = 3; i <= n; i++)
	{
		for(int j = 3; j <= n; j++)
		{
			int x = i - 2, y = j - 2;
			ll tmp = pre[i][j] - pre[x - 1][j] - pre[i][y - 1] + pre[x - 1][y - 1];
			res = max(res, tmp);
		}
	}
	cout << res;
}