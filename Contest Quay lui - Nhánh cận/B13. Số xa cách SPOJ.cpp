#include <bits/stdc++.h>
#define ll long long
/*
 Không có hai chữ số liên tiếp nào trong K
có hiệu bằng 1.
*/
using namespace std;
int n, s;
int a[199] = {-1};
int used[199] = {0};

void solve()
{
	for(int i = 1; i <= n; i++)
		cout << a[i];
	cout << endl;
}
void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(!used[j] && abs(j - a[i - 1]) != 1)
		{
			a[i] = j;
			used[j] = 1;
			if(i == n) solve();
			else Try(i + 1);

			used[j] = 0;
		}
	}
}
main()
{
	cin >> n;

	Try(1);
}