#include <bits/stdc++.h>
#define ll long long
/*
 Nhiệm vụ của bạn là chia táo thành hai nhóm
sao cho sự khác biệt giữa trọng lượng của 2 nhóm là nhỏ nhất.
*/
using namespace std;
int a[1999];
int x[1999];
int n;
int res = 1e9;
int sum = 0;
void solve()
{
	int tmp1 = 0;
	for(int i = 1; i <= n; i++)
	{
		if(a[i]) tmp1 += x[i];
	}
	int tmp2 = sum - tmp1;
	res = min(res, abs(tmp2 - tmp1));
}
bool isFinal()
{
	for(int i = 1; i <= n; i++)
	{
		if(!a[i]) return false;
	}
	return true;
}
void nextGen()
{
	int i = n;
	while(i >= 1 && a[i] == 1)
	{
		a[i] = 0;
		i--;
	}
	if(i >= 1) a[i] = 1;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> x[i];
		sum += x[i];
		a[i] = 0;
	}
	while(!isFinal())
	{
		nextGen();
		solve();
	}
	cout << res;
}