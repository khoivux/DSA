#include <bits/stdc++.h>
#define ll long long

using namespace std;
int dx[3] = {0, -1, -1};
int dy[3] = {-1, -1, 0};

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, m; cin >> n >> m;
	int a[n + 1][m + 1];
	int F[n + 1][m + 1] = {0};
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			int sum = 0;
			for(int k = 0; k < 3; k++)
			{
				int i1 = i + dx[k], j1 = j + dy[k];
				if(i1 > 0 && j1 > 0) 
					sum = max(sum, F[i1][j1]);
			}
			F[i][j] = sum + a[i][j];
		}
	}
	cout << F[n][m];
}