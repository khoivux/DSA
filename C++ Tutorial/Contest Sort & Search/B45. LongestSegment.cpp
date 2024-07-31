#include <bits/stdc++.h>
#define ll long long
/*
Mảng con dài nhất mà mỗi phần
tử chỉ xuất hiện 1 lần
*/
using namespace std;

int d[1000] = {0};
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n; cin >> n;
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
		else if(d[a[r]] == 2)
		{
			while(d[a[r]] > 1)
			{
				d[a[l]]--;
				if(d[a[l]] == 0) cnt--;
				l++;
			}
		}
		
		res = max(res, r - l + 1);
	}
	cout << res;
}