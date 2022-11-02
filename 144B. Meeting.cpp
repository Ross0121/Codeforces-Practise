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
  ll xa, xb, ya, yb, n, cnt = 0;
  cin >> xa >> ya >> xb >> yb;
  set<pll> vec;

  ll st, en;
  if (ya > yb)
    st = yb, en = ya;
  else
    st = ya, en = yb;

  for (ll i = st; i <= en; i++)
  {
    vec.insert({xa, i});
    vec.insert({xb, i});
  }

  if (xa > xb)
    st = xb, en = xa;
  else
    st = xa, en = xb;

  for (ll i = st; i <= en; i++)
  {
    vec.insert({i, ya});
    vec.insert({i, yb});
  }

  bool flag[vec.size()] = {false};

  cin >> n;
  for (ll i = 0; i < n; i++)
  {
    ll x, y, r;
    cin >> x >> y >> r;

    ll j = 0;
    for (auto e : vec)
    {
      ll k = (e.first - x) * (e.first - x) + (e.second - y) * (e.second - y);

      if (k <= r * r)
        flag[j] = true;

      j++;
    }
  }


  for (ll i = 0; i < vec.size(); i++)
  {
    if (!flag[i])
      cnt++;
  }



  cout << cnt << "\n";
  return 0;
}
