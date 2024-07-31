#include <bits/stdc++.h>
#define ll long long
/*
Mỗi khách hàng thông báo mức giá tối đa mà họ sẵn sàng trả
cho một vé và sau đó, họ sẽ nhận được một vé với mức giá gần nhất có thể sao
cho không vượt quá mức giá tối đa.
*/
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, m; cin >> n >> m;
	int b[m];
	multiset<int> ms;
	for (int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		ms.insert(x);
	}
	for (int i = 0; i < m; ++i)
	{
		int x; cin >> x;
		auto it = ms.upper_bound(x);
		// dung map, set, ms, mm 
		if(it != ms.begin())
		{
			it--;
			cout << *it << endl;
			ms.erase(it);
		}
		else cout << "-1";
	}
}