#include <bits/stdc++.h>
/*
đếm xem trong 2 mảng tồn tại bao nhiêu cặp i, j sao cho
A[i] = B[j]
*/
using namespace std;
main()
{
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	int res = 0;
	int i = 0, j = 0;
	while(i < n && j < m)
	{
		if(a[i] < b[j])
		{
			i++; continue;
		}
		else if(a[i] > b[j])
		{
			j++; continue;
		}
		int dem1 = 0, dem2 = 0;		
		while(a[i] == b[j])
		{
			dem1++; i++;
		}
		while(b[j] == a[i - 1])
		{
			dem2++; j++;
		}
		res += dem1 * dem2;
	}
	cout << res;
}