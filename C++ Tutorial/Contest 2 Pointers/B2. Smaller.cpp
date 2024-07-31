#include <bits/stdc++.h>
/*
đối với
mỗi phần tử trong mảng B[] hãy đếm xem trong mảng A[] có bao nhiêu phần tử
nhỏ hơn nó.
*/
using namespace std;
main()
{
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	
	int i = 0, j = 0;
	while(j < m)
	{
		while(a[i] < b[j]) i++;
		cout << i << " ";
		j++;
	}
}