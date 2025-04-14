/* this problem is solve using pair in set
this can also be solved by pair in vector
thats solveing name indian summer2.cpp
problem link:https://codeforces.com/contest/44/problem/A
Input
5
birch yellow
maple red
birch yellow
maple yellow
maple green
Output
4

Input
3
oak yellow
oak yellow
oak yellow

Output
1


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
    pair<string, string> p1;
    set<pair<string, string>> st;
    int n;
    cin >> n;
    string spice, color;
    for (int i = 0;i<n;i++)
    {
        cin >> spice >> color;

        p1 = make_pair(spice, color);
        st.insert(p1);
    }
    int sz = st.size();
    cout << sz << nl;
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