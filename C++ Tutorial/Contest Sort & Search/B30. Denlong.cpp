#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, l; cin >> n >> l; 
	float a[n + 1];
	float res = -1e9;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}	
	sort(a, a + n);
	for(int i = 1; i <= n; i++)
	{
		float tmp  = a[i] - a[i - 1];
		res = max(res, tmp);
	}
	res /= 2;

	res = max(res, max(a[0], l - a[n - 1]));
	cout << res;
}