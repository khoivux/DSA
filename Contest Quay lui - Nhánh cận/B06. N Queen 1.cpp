#include <bits/stdc++.h>
#define ll long long
// N Queen
using namespace std;
int n;
int a[199] = {0}; // Col
int Xuoi[199] = {0}; // i - j + n
int Nguoc[199] = {0}; // i + j - 1
int cnt = 0;
// i = row
// j = col
void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(!a[j] && !Xuoi[i - j + n] && !Nguoc[i + j - 1])
		{
			a[j] = 1;
			Xuoi[i - j + n] = 1;
			Nguoc[i + j - 1] = 1;
			if(i == n) cnt++;
			else Try(i + 1);
			a[j] = 0;
			Xuoi[i - j + n] = 0;
			Nguoc[i + j - 1] = 0;
		}
	}
}
main()
{
	cin >> n;
	Try(1);
	cout << cnt;
}