#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int c[199][199];
int x[199];
int used[199] = {0};
int cost = 0;
int res = 1e9;
void Try(int i)
{
	for(int j = 2; j <= n; j++)
	{
		if(!used[j])
		{
			x[i] = j;
			cost += c[x[i - 1]][j];
			used[j] = 1;

			if(i == n) res = min(res, cost + c[1][j]);
			else Try(i + 1);

			cost -= c[x[i - 1]][j];
			used[j] = 0;
		}
	}
}
main()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> c[i][j];
		}
	}
	x[1] = 1;
	Try(2);
	cout << res;
}