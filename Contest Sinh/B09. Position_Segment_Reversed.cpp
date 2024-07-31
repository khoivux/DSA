#include <bits/stdc++.h>
#define ll long long
/*
 xác định xem tổ hợp đã cho có số thứ tự bao nhiêu nếu xếp
các tổ hợp chập K của N theo thứ tự ngược
*/
using namespace std;
int n, k;
int a[1000];
vector<vector<int>> v;
bool equal(vector<int> ve, int x[])
{
	for(int i = 0; i < k; i++)
	{
		if(ve[i] != x[i]) return false;
	}
	return true;
}

bool isFinal()
{
	for(int i = 1; i <= k; i++)
	{
		if(a[i] != n - k + i) return false;
	}
	return true;
}
void nextGen()
{
	int i = k;
	while(i >= 1 && a[i] == n - k + i)
	{
		i--;
	}
	if(i > 0)
	{
		a[i]++;
		for(int j = i + 1; j <= k; j++)
		{
			a[j] = a[j - 1] + 1;
		}
	}
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n >> k;
	vector<int> t;
	for(int i = 1; i <= k; i++)
	{
		a[i] = i;
		t.push_back(a[i]);
	}
	v.push_back(t);
	while(!isFinal())
	{
		nextGen();
		vector<int> tmp;
		for(int i = 1; i <= k; i++)
		{
			tmp.push_back(a[i]);
		}
		v.push_back(tmp);
	}
	for(int i = 0; i < k; i++) cin >> a[i];
	reverse(v.begin(), v.end());
	for(int i = 0; i < v.size(); i++)
	{
		if(equal(v[i], a)) cout << i + 1;
	}
}