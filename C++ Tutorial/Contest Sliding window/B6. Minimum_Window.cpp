#include <bits/stdc++.h>
/*
Tìm xâu con ngắn nhất của S chứa
đầy đủ mọi kí tự của xâu
*/
using namespace std;
int cntT = 0; //Dem ki tu khac nhau cua T
int cntS = 0;
int dT[256] = {0};
int dS[256] = {0};
main()
{
	string S, T;
	cin >> S;
	cin >> T;
	for(char c : T)
	{
		dT[c]++;
		if(dT[c] == 1) cntT++;
	}
	int l = 0, r = 0;
	int id1, id2;
	int res = 1e9;
	while(r < S.length())
	{
		dS[S[r]]++;
		if(dT[S[r]] && dS[S[r]] == dT[S[r]]) cntS++;

		if(cntS == cntT)
		{
			while(1)
			{
				if(dS[S[l]] - 1 >= dT[S[l]])
				{
					dS[S[l]]--;
					l++;
				}
				else break;
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
	cout << cntT << endl;
	for(int i = id1; i <= id2; i++)
		cout << S[i];
}
