#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int ok = 0;
int a[199][199] = {0};
string s = "";

void Trj(int i, int j)
{
	if(i == n && j == n)
	{
		ok = 1; 
		cout << s << endl;
	}

	if(a[i + 1][j] == 1)
	{
		s += 'D';
		Trj(i + 1, j);
		s.erase(s.length() - 1);
	}
	if(a[i][j + 1] == 1)
	{
		s += 'R';
		Trj(i, j + 1);
		s.erase(s.length() - 1);
	}
}

main()
{

	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}

	Trj(1, 1);
}