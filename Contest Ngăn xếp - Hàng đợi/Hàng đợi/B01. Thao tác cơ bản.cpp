#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t; cin >> t;
	queue<int> q;
	while(t--)
	{
		int n; cin >> n;
		if(n == 1) cout << q.size() << endl;
		else if(n == 2)
		{
			if(q.empty()) cout << "YES";
			else cout << "NO";
			cout << endl;
		}
		else if(n == 3)
		{
			int x; cin >> x;
			q.push(x);
		}
		else if(n == 4) q.pop();
		else if(n == 5)
		{
			if(q.empty()) cout << -1;
			else cout << q.front();
			cout << endl;
		}
		else
		{
			if(q.empty()) cout << -1;
			else cout << q.back();
			cout << endl;
		}
	}
}