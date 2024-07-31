#include <bits/stdc++.h>
/*
in ra số lớn
nhất và nhỏ nhất của mọi mảng con cỡ K của mảng A[]
*/
using namespace std;
main()
{
	int n, k; cin >> n >> k;
	int a[n];
	multiset <int> s;
	
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= k; i++) s.insert(a[i]);
	
	cout << *s.rbegin() << " " << *s.begin() << endl;
	for(int i = k + 1; i <= n; i++)
	{
	
		s.insert(a[i]);
		s.erase(s.find(a[i - k]));
			cout << *s.rbegin() << " " << *s.begin() << endl;
	}
			
}