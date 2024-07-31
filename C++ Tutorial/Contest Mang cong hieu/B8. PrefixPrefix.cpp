#include <bits/stdc++.h>
/*
Cho mảng A[] có N phần tử và M thao tác, mỗi thao tác yêu cầu bạn tăng các
phần tử ở vị trí L tới R của mảng lên D đơn vị (1<=L<=R<=N). Các thao tác này
được đánh số từ 1 đến M, ngoài ra Tèo lại muốn thực hiện K truy vấn, mỗi truy
vấn Tèo lại thực hiện các thao tác từ x tới y theo số thứ tự thao tác
(1<=x<=y<=M). Bạn hãy giúp Tèo in ra mảng A[] sau K truy vấn
*/
using namespace std;
int diff[200001] = {0}; // Luu so lan xuat hien cua tung thao tac
int pre[200001] = {0}; // Luu gia tri tang cua tung index
int l[1e6], r[1e6], val[1e6];
main()
{
	int n, m, k; cin >> n >> m >> k;
	int a[n];
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= m; i++)
	{
		cin >> l[i] >> r[i] >> val[i];	
	}	
	
	for(int i = 1; i <= k; i++)
	{
		int x, y; cin >> x >> y;
		diff[x]++; 
		diff[y + 1]--;
	}
	
	for(int i = 1; i <= m; i++)
	{
		diff[i] += diff[i - 1];
		pre[l[i]] += diff[i] * val[i];
		pre[r[i] + 1] -= diff[i] * val[i]; 
	}
	for(int i = 1; i <= n; i++)
	{
		pre[i] += pre[i - 1];
	}
}