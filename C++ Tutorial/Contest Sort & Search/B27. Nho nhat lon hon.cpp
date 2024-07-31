#include <bits/stdc++.h>
#define ll long long
/*
tìm giá trị nhỏ nhất (phải
thuộc mảng A[]) lớn hơn A[i]
*/
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n; cin >> n; 
	int a[n];
	int b[n];
	int res = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		b[i] = a[i];
	}	
	sort(b, b + n);
	for (int i = 0; i < n; ++i)
	{
		auto it = upper_bound(b, b + n, a[i]);
		int id = it - b;
		if(id < n) cout << b[id];
		else cout << "_";

		cout << " ";
	}
}