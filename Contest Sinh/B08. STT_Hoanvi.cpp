#include <bits/stdc++.h>
#define ll long long
/*
Xác định xem hoán vị này là 
hoán vị thứ bao nhiêu
*/
using namespace std;
int n;
int x[1000];
int a[1000];
vector<vector<int>> v;
bool equal(vector<int> ve, int x[])
{
	for(int i = 0; i < ve.size(); i++)
	{
		if(ve[i] != x[i]) return false;
	}
	return true;
}
bool isFinal()
{
	for(int i = 1; i < n; i++)
	{
		if(a[i] < a[i + 1]) return false;
	}
	return true;
}
void nextGen()
{
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1])
	{
		i--;
	}
	int j = n;
	while(a[j] < a[i]) j--;
	swap(a[i], a[j]);
	int l = i + 1, r = n;
	while(l <= r)
	{
		swap(a[l], a[r]);
		l++; r--;
	}
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n;
	vector<int> tmp;
	for(int i = 1; i <= n; i++)
	{
		a[i] = i;
		tmp.push_back(a[i]);
	}
	v.push_back(tmp);
	while(!isFinal())
	{
		nextGen();
		vector<int> t;
		for(int i = 1; i <= n; i++)
			t.push_back(a[i]);

		v.push_back(t);
	}

	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < v.size(); i++)
	{
		if(equal(v[i], a)) cout << i + 1;
	}
}