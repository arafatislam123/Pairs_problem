/*
problem link:https://codeforces.com/contest/166/problem/A

in ranklist2.cpp will solve alternative way


*/

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



void solve(int tc)
{
    int n, k;
    cin >> n >> k;
    
    vector<pair<int, int>> allteams;
    for (int i = 0; i < n; i++)
    {
        int solvecnt;
        int penalty;
        cin >> solvecnt >> penalty;
        allteams.push_back(make_pair(-1 * solvecnt, penalty));
    }
    sort(allteams.begin(), allteams.end());
    int cnt = 0;
    for(auto currentteam:allteams)
    {
        if(currentteam==allteams[k-1])
        {
            cnt++;
        }
        // cout << currentteam.first <<" "<<currentteam.second<<nl;

    }
    cout << cnt << nl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    // cin >> tc;

    for (int i = 1; i <= tc; i++)
        solve(i);
}