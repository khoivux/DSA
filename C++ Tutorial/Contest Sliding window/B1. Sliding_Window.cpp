#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main()
{
	int n, k; cin >> n >> k;
	int a[n];
	long long sum = 0;
	int id = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(i < k) sum += a[i];
	}
	long long res = sum;
	for(int i = k; i < n; i++)
	{
		sum = sum + a[i] - a[i - k];
		if(sum > res)
		{
			res = sum;
			id = i - k + 1;
		}
	}
	cout << res << endl;
	for(int i = id; i < id + k; i++)
	{
		cout << a[i] << " ";
	}
}
