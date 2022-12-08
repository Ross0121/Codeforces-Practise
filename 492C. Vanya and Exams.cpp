#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
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

void show(vector<ll> v)
{
  for (auto x : v)
    cout << x << " ";
  cout << endl;
}
void seeout(int a[], ll n)
{
  // int sumt = 0;
  fl(i, 0, n)
  {
    cout << a[i] << " ";
    // sumt += a[i];
  }
  cout << endl;
  // cout << sumt;
}


int main()
{
  ll t;
  // cin >> t;
  t = 1;
  while (t--)
  {
    ll n, r, av, ans = 0;
    cin >> n >> r >> av;
    vector<pll> v;
    ll tot = n * av;
    fl(i, 0, n)
    {
      ll a, b;
      cin >> a >> b;
      v.pb({b, a});
      tot -= a;
    }
    sort(v.begin(), v.end());
    // cout << tot << "atot";
    if (tot > 0)
    {
      ll i = 0;
      while (tot)
      {
        if (v[i].se < r)
        {
          ll sub = min((r - v[i].se), tot);
          ans += sub * v[i].fi;
          tot -= sub;
          // cout << r - v[i].se << "r-vse ";
        }
        i++;
      }
      cout << ans << endl;

    }
    else
      cout << '0' << endl;

  }
}
