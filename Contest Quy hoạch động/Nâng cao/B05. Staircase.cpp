#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int mod = 1e9 + 7;
ll F[1000001] = {0};
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, k; cin >> n >> k;
	F[0] = 1;
	F[1] = 1;
	for(int i = 2; i <= n; i++)
	{
		
		for(int j = 1; j <= k; j++)
		{
			if(i - j >= 0)
			{
				F[i] += F[i - j];
				F[i] %= mod;
			}
		}
	}

	cout << F[n];
}