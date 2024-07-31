#include <bits/stdc++.h>
#define ll long long

using namespace std;
int k, n; 
int a[1000];
void nextGen()
{
	int i = k;
	while(i >= 1 && a[i] == n - k + i)
	{
		i--;
	}

	if(i >= 1)
	{
		a[i]++;
		for(int j = 1; j <= k; j++)
		{
			
			if(j >= i + 1) a[j] = a[j - 1] + 1;

			cout << a[j] << " ";
		}
	}
	else
	{
		for (int j = 1; j <= k; ++j)
		{
			cout << j << " ";
		}
	}
	
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n >> k;
	for (int i = 1; i <= k; ++i)
	{
		cin >> a[i];
	}

	nextGen();
}