#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, k;
int a[1999];
vector<vector<int>> v;

// void result()
// {
// 	for(int i = 1; i <= n; i++)
// 	{
// 		cout << a[i] << " ";
// 	}
// 	cout << endl;
// }
bool isFinal()
{
	for(int i = 1; i <= n - 1; i++)
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
	vector<int> t;
	for(int i = 1; i <= n; i++) 
	{
		a[i] = i;
		t.push_back(a[i]);
	}
	v.push_back(t);
	while(!isFinal())
	{
		nextGen();
		vector<int> tmp;
		for(int i = 1; i <= n; i++)
		{
			tmp.push_back(a[i]);
		}
		v.push_back(tmp);
	}

	for(int i = v.size() - 1; i >= 0; i--)
	{
		for(auto it : v[i])
		{
			cout << it << " ";
		}
		cout << endl;
	}
}

