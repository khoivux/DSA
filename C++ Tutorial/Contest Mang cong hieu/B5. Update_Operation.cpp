#include <bits/stdc++.h>
/*
Cho mảng số nguyên A[] gồm N phần tử, có Q thao tác, mỗi thao tác yêu cầu các
bạn tăng tất cả các phần tử từ chỉ số L tới chỉ số R lên K đơn vị. Bạn hãy in ra
mảng sau khi thực hiện các thao tác trên.
*/
using namespace std;
main()
{
	int n, q; cin >> n >> q;
	int a[n + 5];
	int d[n + 5];
	int pre[n + 5];
	for(int i = 1; i <= n; i++) cin >> a[i];
	d[1] = a[1];
	for(int i = 2; i <= n; i++) d[i] = a[i] - a[i - 1];
	while(q--)
	{
		int l, r, k; cin >> l >> r >> k;
		l++, r++;
		d[l] += k;
		d[r + 1] -= k;	
	}
	for(int i = 1; i <= n; i++)
		{
			if(i == 1) pre[i] = d[i];
			else pre[i] = pre[i - 1] + d[i];	
		}
	for(int i = 1; i <= n; i++) cout << pre[i] << " ";
}