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
    cin >> s;
    multiset<char> st;
    vector<char> v;
    for (int i = 0; i < s.size();i++)
    {
        if(s[i]=='+')
        {
            continue;
        }
        else
        {
            st.insert(s[i]);
        }
    }
    for (auto it = st.begin(); it !=st.end();it++)
    {
        // cout << *it;
        // cout << '+';
        v.pb(*it);
        v.pb('+');
    }
    for (int i = 0; i < v.size() - 1;i++)
    {
        cout << v[i];
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