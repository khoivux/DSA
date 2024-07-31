#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int a[1999];

void result()
{
	for(int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
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
	for(int i = 1; i <= n; i++) cin >> a[i];
	nextGen();
	result();
}

