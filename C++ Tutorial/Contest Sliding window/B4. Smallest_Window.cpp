#include <bits/stdc++.h>
#define ll long long
/*
tìm chiều dài của xâu
con liên tiếp nhỏ nhất có chứa đầy đủ 
các kí tự khác nhau của S.
*/
using namespace std;
int cntT = 0, cntS = 0;
int dT[256], dS[256];
int res = 1e9;
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
		
	string S;
	cin >> S;
	for(char c : S)
	{
		dT[c]++;
		if(dT[c] == 1) cntT++;
	}
	int id1, id2;
	int l = 0, r = 0;
	while(r < S.length())
	{
		dS[S[r]]++;
		if(dS[S[r]] == 1) cntS++;
		if(cntS == cntT)
		{
			while(dS[S[l]] - 1 >= 1)
			{
				dS[S[l]]--;
				l++;
			}
			if(r - l + 1 < res)
			{
				id1 = l;
				id2 = r;
				res = r - l + 1;
			}
		}
		
		r++;
	}
	for (int i = id1; i <= id2; ++i)
	{
		cout << S[i];
	}
}