#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, k;
int a[1999];

void result()
{
	for(int i = 1; i <= k; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
bool isFinal()
{
	for(int i = 1; i <= k; i++)
	{
		if(a[i] != n) return false;
	}
	return true;
}
void nextGen()
{
	int i = k;
	while(i >= 1 && a[i] == n)
	{
		i--;
	}
	
	if(i > 0)
	{
		a[i]++;
		for(int j = i + 1; j <= k; j++)
			a[j] = 1;
	}
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n >> k;
	for(int i = 1; i <= k; i++) 
	{
		a[i] = 1;
		cout << 1 << " ";
	}
	cout << endl;
	while(!isFinal())
	{
		nextGen();
		result();
	}
}

