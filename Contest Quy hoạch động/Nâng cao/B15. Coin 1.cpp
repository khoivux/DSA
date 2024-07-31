 #include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, s; cin >> n >> s;
	int C[n + 1];
	int F[s + 1];
	F[0] = 0;

	for(int i = 1; i <= n; i++) cin >> C[i];
	for(int i = 1; i <= s; i++)
	{
		F[i] = 1e9;
		for(int j = 1; j <= n; j++)
		{
			if(i - C[j] >= 0) F[i] = min(F[i], F[i - C[j]]);
		}
		F[i] = cnt + 1;
	}
	if(F[s]) cout << F[s];
	else cout << -1;
	cout << endl;
}