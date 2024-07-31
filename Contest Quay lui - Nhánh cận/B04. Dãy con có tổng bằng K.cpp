#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, k;
int sum = 0;
int x[199];
int a[199] = {0};
void solve()
{
	for(int i = 1; i <= n; i++)
	{
		if(a[i]) cout << x[i] << " ";
	}
	cout << endl;
}
void Try(int i, int pos)
{
	for(int j = pos; j <= n; j++)
	{
		sum += x[j];
		a[j] = 1;
		if(sum == k) solve();
		else Try(i + 1, j + 1);
		sum -= x[j];
		a[j] = 0;
	}
}

main()
{
	cin >> n >> k;
	for(int i = 1; i <= n; i++) cin >> x[i];
	sort(x + 1, x + n + 1);
	Try(1, 1);
}