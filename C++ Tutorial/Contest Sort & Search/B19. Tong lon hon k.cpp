#include <bits/stdc++.h>
#define ll long long

using namespace std;
/*
Đếm số lượng cặp số ai, aj có tổng lớn hơn k.
*/
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k; cin >> n >> k; 
	int a[n];
	int res = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}	
	sort(a, a + n);
	for(int i = 0; i < n; i++)
	{
		auto it1 = upper_bound(a + i + 1, a + n, k - a[i]);
		res += n - (it1 - a);
	}
	cout << res;
}