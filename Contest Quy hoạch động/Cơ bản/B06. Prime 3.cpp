#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll prime[1000001];
ll F[1000001] = {0};
const int mod = 1e9 + 7;
void sang()
{
	prime[0] = 0;
	prime[1] = 0;

	for(int i = 2; i <= 1000000; i++)
		prime[i] = 1;

	for(int i = 2; i <= 1000; i++)
	{
		if(prime[i])
		{
			for(int j = i * i; j <= 1000000; j += i) 
				prime[j] = 0;
		}
	}
}
void makeF()
{
	ll res = 1;
	for(int i = 0; i <= 1000000; i++)
	{
		if(prime[i]) res = (res * i % mod) % mod;
		F[i] = res;
	}
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	sang();
	makeF();

	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << F[n] << endl;
	}
}