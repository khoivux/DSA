#include <bits/stdc++.h>
#define ll long long

using namespace std;
/*
Hãy đếm số lượng miền các số 1 trong ma trận
*/
int a[1000][10000];
int n, m; 
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int res = 0;
void solve(int i, int j)
{
	a[i][j] = 0;
	for (int k = 0; k < 4; ++k)
	{
		int i1 = i + dx[k], j1 = j + dy[k];
		if(i1 > 0 && i1 <= n && j1 > 0 && j1 <= m)
		{
			if(a[i1][j1])
			{
				solve(i1, j1);
			}	
		}
	}
}

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
		}
	}
	int cnt = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(a[i][j] == 1)
			{
				cnt++;
				solve(i, j);
			}
		}
	}
	cout << cnt;
}