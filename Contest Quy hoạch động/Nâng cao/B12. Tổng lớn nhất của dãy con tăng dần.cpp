#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n; cin >> n;
	int a[n], F[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		F[i] = a[i];
	}	
	int res = 0;
	for(int i = 0; i < n; i++)
	{
		int sum = 0;
		for(int j = 0; j < i; j++)
		{
			if(a[j] < a[i]) sum = max(sum, F[j]);
		}
		F[i] += sum;
		res = max(res, F[i]);
	}
	cout << res;
}