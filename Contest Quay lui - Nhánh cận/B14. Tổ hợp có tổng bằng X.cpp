#include<bits/stdc++.h>
#define ll long long
/*
Nhiệm vụ của bạn là
tìm phép tổ hợp các số trong mảng A[] có tổng bằng X. Các số trong mảng A[] có
thể được sử dụng nhiều lần
*/
using namespace std;
int n, X, sum = 0; 
int a[1999];
int x[1999];
int check = 0;
void Try(int i, int pos)
{
	for(int j = pos; j <= n; j++)
	{
		if(sum + x[j] <= X)
		{
			a[i] = x[j];
			sum += x[j];
			if(sum == X)
			{
				check = 1;
				for(int k = 1; k <= i; k++)
					cout << a[k] << " ";
				cout << endl;
			}
			else Try(i + 1, j);
			sum -= x[j];
		}
	}
}
main()
{
	cin >> n >> X;
	for(int i = 1; i <= n; i++) cin >> x[i];
	sort(x + 1, x + n + 1);
	Try(1,1);
	if(!check) cout << "-1";
}