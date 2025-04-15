#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define nl '\n'
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define ALL(v) (v).begin(), (v).end()
#define rALL(v) (v).rbegin(), (v).rend()

#define show(x) cout << #x << " : " << x << endl

bool comp(pair<int,int>&p1,pair<int,int>&p2)
{
    if(p1.first>p2.first)
    {
        return 1;
    }
    else if(p1.first==p2.first){
        if(p1.second<p2.second)
        {
            return 1;
        }
        else
        {
            return 0;
        }
       
    }
    else
    {
        return 0;
    }

}

void solve(int tc)
{
    int n, k;
    cin >> n >> k;
    pair<int, int> p1;
    vector<pair<int, int>> v;
    for (int i = 0; i < n;i++)
    {
        int x, y;
        cin >> x >> y;
        p1 = make_pair(x, y);
        v.push_back(p1);
    }
    sort(v.begin(), v.end(), comp);
    int cnt = 0;
    for(auto a:v)
    {
        // cout << a.first <<" "<<a.second<< nl;
        if(a==v[k-1])
            cnt++;
    }
    cout << cnt << nl;
}

int main()
{
 ios_base::sync_with_stdio(0);
  cin.tie(0);
    int tc = 1;
    //cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);
}