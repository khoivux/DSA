#include <bits/stdc++.h>
#define ll long long

using namespace std;
int m, n;
int a[199][199] = {0};
int cnt = 0;
void Try(int i, int j)
{
	if(i == m && j == n) cnt++;

	if(i + 1 <= m && a[i + 1][j])
	{
		Try(i + 1, j);
	}
	if(j + 1 <= n && a[i][j + 1])
	{
		Try(i, j + 1);
	}
}
main()
{
	cin >> m >> n;
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
	
	Try(1, 1);
	cout << cnt;
}