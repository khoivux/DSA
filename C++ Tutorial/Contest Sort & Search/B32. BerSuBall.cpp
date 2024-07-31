#include <bits/stdc++.h>
#define ll long long
/*
Viết mã
xác định số cặp lớn nhất có thể được hình thành từ n trai và m gái.
Trai gái hơn kém nhau tối đa 1   
*/
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];

	sort(a, a + n); sort(b, b + m);
	int i = 0, j = 0;
	int res = 0;
	while(i < n && j < m)
	{
		if(abs(a[i] - b[j]) <= 1)
		{
			res++;
			i++; j++;
		}
		else
		{
			if(a[i] > b[j]) j++;
			else i++;
		}
	}
	cout << res;
}