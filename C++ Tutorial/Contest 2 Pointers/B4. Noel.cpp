#include <bits/stdc++.h>
using namespace std;
main()
{
	int n, s; cin >> n >> s;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int res = 0;
	int sum = 0;
	int l, r;
	for(r = 0; r < n; r++)
	{
		sum += a[r];
		while(sum > s){
			sum -= a[l]; 
			l++;
		}
		res = max(res, r - l + 1);
	}
	cout << res;
}