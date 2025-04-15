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
    string s;
    cin>>s;
    vector<int> v;

    for (int i = 0; i < s.size();i=i+2)
    {
        v.push_back(s[i] - '0');
    }
    sort(v.begin(), v.end());
    int n = v.size();
    for (int i = 0; i < n;i++)
    {
        cout << v[i];
        if(i<n-1)
        {
        cout << '+';
        }
    }
    
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