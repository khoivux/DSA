#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
struct job
{
    int id, deadline, profit;
};
bool cmp(job a, job b)
{
    return a.deadline > b.deadline;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n;
    job a[1999];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i].id >> a[i].deadline >> a[i]. profit;
    }
    sort(a, a + n, cmp);
    priority_queue<int> pq;
    int cur_date = a[0].deadline;
    int idx = 0;
    int res = 0;

    while(cur_date >= 1)
    {
        /*
        Với mỗi cur_date tìm tất cả các job có deadline nhỏ hơn date
        Cho job có profitMax vào cur_
        */
        while(idx < n && a[idx].deadline >= cur_date)
        {
            pq.push(a[idx].profit);
            idx++;
        }
        if(!pq.empty())
        {
            res += pq.top();
            pq.pop();
        }
        cur_date--;
    }
    cout << res;
}