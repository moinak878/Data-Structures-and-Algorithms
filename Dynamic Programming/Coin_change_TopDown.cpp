#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll helper(ll n, ll m, const vector<ll> &c, ll memo[][500])
{
    if(n == 0){
        return 1;
    }
    if(n < 0 || m < 0){
        return 0;
    }
    if(memo[n][m] == -1){
        memo[n][m] = helper(n, m -1, c, memo) + helper(n - c[m], m, c, memo);
    }
    return memo[n][m];
}

ll getWays(ll n, const vector <ll> &c)
{
    ll m = c.size(), memo[500][500];
    for(ll i = 0; i < 500; ++i)
        for(ll j = 0; j < 500; ++j)
            memo[i][j] = -1;
    ll temp = helper(n, m -1, c, memo);
    return temp;
}
int main()
{
    ll n, m, a;
    vector <ll> c;
    cin >> n >> m;
    for(ll i = 0; i < m; ++i)
        cin >> a, c.push_back(a);
    // sort(c.begin(), c.end());
    long ways = getWays(n, c);
    cout << ways << endl;
    return 0;
}
