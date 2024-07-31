#include <bits/stdc++.h>
#define ll long long
/*
Hãy tìm cách
trả ít tờ nhất với số tiền đúng bằng S
*/
using namespace std;
int n, s;
int a[199];
int x[199];
int sum = 0;
int res = 1e9;
void Try(int i, int pos)
{
	for(int j = pos; j <= n; j++)
	{
		if(sum + a[j] <= s)
		{
			sum += a[j];
			x[i] = a[j];
			if(sum == s)
			{
				res = min(res, i);
			}
			else Try(i + 1, j + 1);
			sum -= a[j];	
		}
		else return;
	}
}
main()
{
	cin >> n >> s;
	for(int i = 1; i <= n; i++) cin >> a[i];

	Try(1, 1);
	cout << res;
}