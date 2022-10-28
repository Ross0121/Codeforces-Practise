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
  fastio;
  ll n, t1, t2;
  double k;
  cin >> n >> t1 >> t2 >> k;
  pll an[n];
  double ar[n];
  vector<pair<double, ll>> pd(n);
  unordered_map<ll, ll> bn(n);
  fl(i, 0, n)
  {
    ll x, y;
    cin >> x >> y;
    an[i] = mp(x, y);
 
  }
  fl(i, 0, n)
  {
    double a = t1 * an[i].fi, b = t2 * an[i].se, c = t2 * an[i].fi, d = t1 * an[i].se;
 
    if ((1 - k / 100) * a + b > (1 - k / 100) * d + c)
      ar[i] = (1 - k / 100) * a + b;
    else
      ar[i] = (1 - k / 100) * d + c;
 
    pd[i].fi = ar[i];
    pd[i].se = i;
  }
  // sort(pd, pd + n);
 
 
  sort(pd.begin(), pd.end(),
  [](auto & e, auto & f) {
    if (e.fi != f.fi)
      return e.fi < f.fi;
    else
      return e.se > f.se;
  }
      );
 
  rfl(i, n - 1, 0)
  {
    cout << fixed;
    cout << setprecision(2);
    cout <<  pd[i].se + 1 << " " << pd[i].fi << "\n";
 
 
  }
 
 
 
  return 0;
}
 
