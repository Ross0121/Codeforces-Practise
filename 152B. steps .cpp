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
bool onField(ll a, ll b, ll m, ll n)
{
  if (a > 0 && a < m + 1 && b > 0 && b < n+1)
    return true;
  else return false;
}
 
int main()
{
  fastio;
  ll m, n, x, y, st;
  cin >> m >> n >> x >> y >> st;
  pll p[st];
  fl(i, 0, st)
  {
    ll a, b;
    cin >> a >> b;
    p[i].fi = a;
    p[i].se = b;
  }
  ll cnt = 0;
  for (auto it : p)
  {
    for (ll cof = 1100000000; cof; cof /= 2)
      while (onField(x + it.fi * cof, y + it.se * cof, m, n))
      {
        x = x + it.fi * cof;
        y = y + it.se * cof;
        cnt += cof;
        // cout << cof << "cof" << endl;
      }
  }
  cout << cnt;
 
  return 0;
}
