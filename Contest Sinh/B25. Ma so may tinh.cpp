#include <bits/stdc++.h>
#define ll long long
/*
 N ký tự
đầu tiên là hoán vị của N chữ cái in hoa đầu tiên, tính từ A. N ký tự tiếp theo là
các ký tự số bất kỳ từ 1 đến N (có thể trùng nhau)
*/
using namespace std;

int n;
int a[1999];
vector<string> v1, v2;
int used[1999] = {0};


void solve1()
{
	string s = "";
	for(int i = 1; i <= n; i++)
	{
		s += char(a[i] - 1 + 'A');
	}
	v1.push_back(s);
}
void solve2()
{
	string s = "";
	for(int i = 1; i <= n; i++)
	{
		s += to_string(a[i]);
	}
	v2.push_back(s);
}
void Try_HV(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(!used[j])
		{
			a[i] = j;
			used[j] = 1;
			if(i == n) solve1();
			else Try_HV(i + 1);

			used[j] = 0;
		}
	}
}
void Try_CH(int i)
{
	for(int j = 1; j <= n; j++)
	{
		a[i] = j;
		if(i == n) solve2();
		else Try_CH(i + 1);
	}
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n;
	Try_HV(1);
	Try_CH(1);

	for(auto i : v1)
	{
		for(auto j : v2)
		{
			cout << i << j << endl;
		}
	}
}

