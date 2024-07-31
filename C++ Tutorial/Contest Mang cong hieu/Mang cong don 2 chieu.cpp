#include <bits/stdc++.h>
using namespace std;
// Mang cong don hai chieu
main()
{
	int n; cin >> n;
	int a[n+3][n+3];
	int prefix[n+3][n+3];
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++) cin >> a[i][j];
		
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; i <= n; i++)
		{
			pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + a[i][j];
		}
	}
	int a, b, A, B;
	cin >> a >> b >> A >> B;
	res = pre[A][B] - pre[A[b - 1] - pre[a-1][B] + pre[a][b];
}