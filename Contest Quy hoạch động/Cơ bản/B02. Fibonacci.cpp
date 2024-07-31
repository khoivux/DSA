#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll F[1000001];
const int mod = 1e9 + 7;

void makeF()
{
	F[0] = 0; F[1] = 1;
	for(int i = 2; i <= 1000000; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
		F[i] %= mod;
	}
}

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	makeF();
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << F[n] << endl;
	}
}