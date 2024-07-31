#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a[1000][10000];
int n, m, s, t; 
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int cnt[1] = {0};

void solve(int i, int j)
{
	cnt[0]++;
	a[i][j] = 1;
	for (int k = 0; k < 4; ++k)
	{
		int i1 = i + dx[k], j1 = j + dy[k];
		if(i1 > 0 && i1 <= n && j1 > 0 && j1 <= n)
		{
			if(a[i1][j1] == 0)
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

	cin >> n >> s >> t;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
	solve(s, t);
	cout << cnt[0];
}