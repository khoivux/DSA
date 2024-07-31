#include <bits/stdc++.h>
#define ll long long

using namespace std;
// Tim so cach tao ra n - a = so cach tao ra n + a
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, s; cin >> n >> s;
	int a[n];
	int F[s + 1];
	F[0] = 1;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 1; i <= s; i++)
	{
		F[i] = 0;
		for(int j = 0; j < n; j++)
		{
			if(i - a[j] >= 0) F[i] += F[i - a[j]];
		}
	} 	
	cout << F[s];
}