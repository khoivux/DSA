#include <bits/stdc++.h>
#define ll long long
/*
Đối với mỗi máy, bạn biết số giây nó cần để tạo ra một sản phẩm. 
Các máy có thể hoạt động đồng thời và bạn có thể tự do quyết định lịch trình của chúng. 
Thời gian ngắn nhất cần thiết để làm ra t sản phẩm làbao nhiêu?
*/
using namespace std;
bool check(int a[], int n, int t, ll time)
{
	ll cnt = 0;
	for (int i = 0; i < n; ++i)
	{
		cnt += time / a[i];
	}
	return cnt >= t;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, t; cin >> n >> t;
	int a[n];
	for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}	
	ll res = 0;
	ll l = 0, r = (*min_element(a, a + n)) * t;
	while(l <= r)
	{
		ll mid = (l + r) / 2;
		if(check(a, n, t, mid))
		{
			res = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}

	cout << res;
}