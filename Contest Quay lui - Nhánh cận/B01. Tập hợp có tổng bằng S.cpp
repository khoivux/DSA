#include <bits/stdc++.h>
#define ll long long
/*
Nhiệm vụ của bạn là hãy đếm xem có tất cả bao nhiêu
tập hợp có số lượng phần tử bằng k và tổng của tất cả các phần tử trong tập hợp
bằng s
*/
using namespace std;
int n, k, s;
int x[1999];
int a[199];
int cnt  = 0;

void solve()
{
	int sum = 0;
	for(int i = 1; i <= k; i++) sum += x[i];

	if(sum == s) cnt++;
}

void Try(int i, int pos)
{
	for(int j = pos; j <= n; j++)
	{
		x[i] = j;
		if(i == k) solve();
		else Try(i + 1, j + 1);
	}
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n >> k >> s;

	Try(1, 1);
	cout << cnt;
}