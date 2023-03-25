#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double
#define setpr(x) cout<<setprecision(x)<<fixed
#define sz size()

typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef map<ll, ll> mll;
typedef vector<pll> vpll;
#define nl cout<<"\n";
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fl(i,a,b) for (ll i = a; i < b; i++)
#define rfl(i,a,b) for (ll i= a; i >=b; i--)
#define fastio                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

void yn(int n)
{
    if (n > 0)
        cout << "Yes\n";
    else
        cout << "No\n";
}

void showll(vector<ll> v)
{
    for (auto x : v)
        cout << x << " ";
    cout << "\n";
}
void showch(vector<string> v)
{
    for (auto x : v)
        cout << x << " ";
    cout << "\n";
}
void see(int a[], ll n)
{
    // int sumt = 0;
    fl(i, 0, n)
    {
        cout << a[i] << " ";
        // sumt += a[i];
    }
    cout << endl;
    // cout << sumt;
};

const ll inf = INT_MAX;
const ld ep = 0.0000001;
const ld pi = acos(-1.0);
const ll md = 1000000007;

//practise everyday.
//don't rush submission check all edge cases.
//To find pleasure look for purpose.
//Let the fear of Death get you again.

void dfs(int i, int m, int k, vll g[], vll &vis)
{
    // if (m == 0)
    // {
    //     return;
    // }
    // cout << "m" << m; nl
    if (vis[i] != -1 && vis[i] != k) {vis[i] = -2;}
    else
        vis[i] = k;
    if (m == 0)
    {
        return;
    }
    for (auto a : g[i])
    {
        dfs(a, m - 1, k, g, vis);
    }

}

void solve()
{
    ll n, r, m;
    cin >> n >> r >> m;
    vpll ed(r), ncc(m);
    vll g[n + 1], vis(n + 1, -1);
    fl(i, 0, r)
    {
        cin >> ed[i].fi >> ed[i].se;
    }
    fl(i, 0, m)
    {
        cin >> ncc[i].fi >> ncc[i].se;
        // cout << ncc[i].fi; nl
    }
    fl(i, 0, r)
    {
        g[ed[i].fi].pb(ed[i].se);
        g[ed[i].se].pb(ed[i].fi);
    }
    fl(i, 0, m)
    {
        // if (ncc[i].se > 0)
        dfs(ncc[i].fi, ncc[i].se, i, g, vis);
    }
    ll f = 1;
    fl(i, 1, n + 1)
    {
        // cout << vis[i] << " ";
        if (vis[i] < 0)
            f = 0;
    }
    yn(f);


}

int main()
{
    fastio
    ll t;
    cin >> t;
    // t = 1;
    while (t--)
    {

        solve();

    }
}
