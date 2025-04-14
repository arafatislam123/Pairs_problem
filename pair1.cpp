/* pair assign and pair declaration in vector
input
4
10 arafat
3 nabila
4 musfiq
5 farhan
output
10 arafat
3 nabila
4 musfiq
5 farhan
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
    pair<int,string>student;
    vector<pair<int, string>> allstudent;
    int n;
    cin >> n;
    int roll;
    string name;
    for (int i = 0; i < n;i++)
    {
       
        cin >> roll >> name;
        student = make_pair(roll, name);
        allstudent.push_back(student);
    }
    for(auto currentstudent:allstudent)
    {
        cout << currentstudent.first << " " << currentstudent.second << nl;
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