#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n; cin >> n;
	int a[n + 1];
	int F1[n + 1] = {0}; 
	int F2[n + 1] = {0}; 
	int res = 0;

	for(int i = 1; i <= n; i++) cin >> a[i];
	F1[1] = a[1]; F2[n] = a[n];

	for(int i = 2; i < n; i++)
	{
		F1[i] = 0;
		for(int j = 1; j < i; j++)
		{
			if(a[j] < a[i]) F1[i] = max(F1[i], F1[j] + a[i]); 
		}
	}
	for(int i = n - 1; i > 1; i--)
	{
		F2[i] = 0;
		for(int j = n; j > i; j--)
		{
			if(a[j] < a[i]) F2[i] = max(F2[i], F2[j] + a[i]);
		}
		res = max(res, F1[i] + F2[i] - a[i]);
	}
	cout << res;
}