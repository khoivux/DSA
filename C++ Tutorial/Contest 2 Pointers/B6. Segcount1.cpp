#include <bits/stdc++.h>
//có bao nhiêu mảng con các phần tử liên tiếp trong mảng mà tổng không vượt quá S.
using namespace std;
main()
{
	int n, s; cin >> n >>s;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int sum = 0;
	int res = 0;
	int l, r;
	for(int r = 0; r < n; r++)
	{
		sum += a[r];
		while(sum > s)
		{
			sum -= a[l];
			l++;
		}
		// tim seg co sum <= s
		// so day thoa man la con cua sed do la r - l + 1
		res += r - l + 1;
	}
	cout << res;
}