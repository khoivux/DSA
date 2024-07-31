#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n; cin >> n;
	queue<int> q;
	q.push(1);
	while(n--)
	{
		cout << q.front() << " ";
		int x = q.front();
		q.pop();
		q.push(x * 10);
		q.push(x * 10 + 1);
	}
}