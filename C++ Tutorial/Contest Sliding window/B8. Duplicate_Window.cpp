#include <bits/stdc++.h>
#define ll long long

using namespace std;
/*
xác định xem trong mảng có tồn tại 2 phần tử A[i], A[j] 
với i khác j sao cho A[i] = A[j] và abs(i - j) <= K 
*/
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, k; cin >> n >> k;
	int a[n + 1];
	int sum = 0;
	int cnt = 0;
	int res = -1;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		sum += a[i];
		if(i <= k) cnt += a[i];
	}

	for(int i = k + 1; i <= n; i++)
	{
		cnt = cnt + a[i] - a[i - k];
		res = max(cnt, res);
	}

	if(sum < k) cout << -1;
	else cout << sum - res;
}