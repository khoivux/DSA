#include <bits/stdc++.h>
#define ll long long
/*
Đặt 8 quân hậu lên bàn cờ, sao cho không có 2 quân nào ăn nhau, và
số điểm đạt được là lớn nhất
*/

using namespace std;
int n;
int a[199] = {0}; // Col
int Xuoi[199] = {0}; // i - j + n
int Nguoc[199] = {0}; // i + j - 1
int x[199][199];
int res = 0;
int sum = 0;
// i = row
// j = col
void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(!a[j] && !Xuoi[i - j + n] && !Nguoc[i + j - 1])
		{
			sum += x[i][j];
			a[j] = 1;
			Xuoi[i - j + n] = 1;
			Nguoc[i + j - 1] = 1;
			if(i == n) res = max(res, sum);
			else Try(i + 1);

			sum -= x[i][j];
			a[j] = 0;
			Xuoi[i - j + n] = 0;
			Nguoc[i + j - 1] = 0;
		}
	}
}
main()
{
	n = 8;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> x[i][j];
		}
	}
	Try(1);
	cout << res;
}