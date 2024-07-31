#include <bits/stdc++.h>
using namespace std;
main()
{
	int n, q; cin >> n >> q;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int d[n] = {0};
	int pre[n] = {0};
	while(q--)
	{
		int l, r; cin >> l >> r;
		d[l]++;
		d[r + 1]--;
	}
	for(int i = 0; i < n; i++)
	{
		if(!i) pre[i] = d[i];
		else pre[i] = pre[i - 1] + d[i];
	}
	sort(pre, pre + n, greater<long long>());
	sort(a, a + n, greater<int>());

	long long res = 0;	
	for(int i = 0; i < n; i++) res += a[i] * pre[i];
	cout << res;
}