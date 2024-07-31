#include <bits/stdc++.h>
#define ll long long

using namespace std;
/*
Tìm ra dãy con các phần tử liên tiếp có 
tổng tối thiểu bằng K.
*/
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, k; cin >> n >> k;
	int a[n + 1];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	int id1, id2, res = 1e9;
	int l = 0, r = 0;
	int s = 0;
	for(int r = 0; r < n; r++)
	{
		s += a[r];
		while(s >= k)
		{
			
			if(res > r - l + 1)
			{
				res = r - l + 1;
				id1 = l; id2 = r;
			}
			s -= a[l];
			l++;
		}
	}
	for(int i = id1; i <= id2; i++) 
		cout << a[i] << " ";
}