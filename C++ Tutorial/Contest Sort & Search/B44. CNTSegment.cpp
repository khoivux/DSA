#include <bits/stdc++.h>
#define ll long long
/*
tính số mảng con liên tiếp có
nhiều nhất k giá trị khác nhau.
*/
using namespace std;

int d[199999] = {0};
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, k; cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int l = 0, r = 0;
	int cnt = 0;
	int res = 0;
	for(int r = 0; r < n; r++)
	{
		d[a[r]]++;
		if(d[a[r]] == 1) cnt++;

		if(cnt > k)
		{
			while(cnt > k)
			{
				d[a[l]]--;
				if(d[a[l]] == 0)cnt--;
				l++;
			}
		}
		
		res += r - l + 1;
	}
	cout <<res;
}