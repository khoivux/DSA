#include <bits/stdc++.h>
#define ll long long

using namespace std;
bool check(int a[], int n, int k, double mid)
{
	ll tmp = 0;
	for (int i = 0; i < n; ++i)
	{
		tmp += (int)a[i] / mid;  
	}
	return tmp >= k;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, k; cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	double res = 0;
	double l = 0, r = 9e18;
	for(int i = 0; i < 90; i++)
	{
		double mid = (l + r) / 2;
		if(check(a, n, k, mid))
		{
			res = mid;
			l = mid;
		}
		else r = mid;
	}
	cout << fixed << setprecision(6) << res;
}