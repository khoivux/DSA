  #include <bits/stdc++.h>
#define ll long long
/*
tìm 1 đường đi từ dòng 1 tới dòng
N sao cho các phần tử trên đường đi đó là lớn nhất có thể. Biết rằng ở mỗi bước đi
từ ô hiện tại chỉ có thể đi xuống ô dưới bên trái, ô dưới bên phải hoặc ô dưới của ô
hiện tại.
*/
using namespace std;
int n, m;
int a[1000][1000] = {0};
int fee[1000][1000] = {0};
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			fee[i][j] = a[i][j];
		}
	}

	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			int tmp = max(fee[i - 1][j - 1], max(fee[i - 1][j], fee[i - 1][j + 1]));
			fee[i][j] += tmp;
		}
	}
	int res = -1;
	for(int i = 1; i <= n; i++) res = max(res, fee[n][i]);
	cout << res << endl;
}