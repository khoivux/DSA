#include <bits/stdc++.h>
/*đếm xem
có bao nhiêu mảng con các phần tử liên tiếp trong mảng mà tổng ít nhất bằng S
*/
using namespace std;
main()
{
	int n, s; cin >> n >> s;
	int a[n];
	for(int i = 0; i < n; i++) 
		cin >> a[i];
	int res = 0;
	int sum = 0;
	int l = 0, r = 0;

	for(int r = 0; r < n; r++)
	{
		sum += a[r];
		while(sum >= s)
		{
			res += n - r; 
			//lay cac day bat dau tu l, ket thuc tai r, r+1,..,n - 1
			sum -= a[l];
			l++;
		}
	}
	cout << res;
}