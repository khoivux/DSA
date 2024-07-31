#include <bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin >> n;
	int a[n];
	int pre[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(!i) pre[i] = a[i];
		else pre[i] = pre[i - 1] + a[i];
	}
	int l, r; cin >> l >> r;
	cout << pre[r] - pre[l - 1];
}