#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int a[199][199] = {0};
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};

string path = "DULR";
string s = "";
vector<string> res;
void Try(int i, int j)
{
	if(i == n && j == n) res.push_back(s);

	for(int k = 0; k < 4; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];

		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1])
		{
			s += path[k];
			a[i1][j1] = 0;
			Try(i1, j1);
			a[i1][j1] = 1;
			s.pop_back();
		}
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
	Try(1, 1);
	sort(res.begin(), res.end());
	for(auto it : res) cout << it << endl;
}