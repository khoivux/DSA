#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n; cin >> n;
	int a[n + 1];
	int F[n + 1] = {0};
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}	
	F[1] = a[1];
	int res = 0;
	for(int i = 2; i <= n; i++)
	{
		F[i] = max(F[i - 1], F[i - 2] + a[i]);
		res = max(res, F[i]);
	}
	cout << res;
}