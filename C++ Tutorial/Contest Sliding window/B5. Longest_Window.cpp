#include <bits/stdc++.h>
#define ll long long

using namespace std;
/*
Tìm ra độ dài xâu con dài nhất mà các kí tự
trong xâu con đó không có bất cứ một kí tự nào được lặp lại.
*/
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	string s; cin >> s;
	int res = -1e9;
	int r = 0, l = 0;
	int cnt[256] = {0};
	while(r < s.length())
	{
		cnt[s[r]]++;
		if(cnt[s[r]] == 2)
		{
			while(cnt[s[r]] == 2)
			{
				cnt[s[l]]--;
				l++;
			}
		}
		
		res = max(r - l + 1, res);
		r++;
	}
	cout << res;
}