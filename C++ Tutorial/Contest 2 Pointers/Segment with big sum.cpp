#include <bits/stdc++.h>
using namespace std;
main()
{
	int n, s; cin >> n >> s;
	int a[n]; 
	for(int i = 0; i < n; i++) cin >> a[i];
	int l = 0, r = 0;
	long long sum = 0;
	int res = 0;
	for(int r = 0; r < n; r++)
	{
		sum += a[r];
		while(sum >= s)
		{
			res = min(res, r - l + 1);
			sum -= a[l];
			l++;
		}
	}
	cout << res;
}