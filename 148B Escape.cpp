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
  double vp, vd, t, f, c;
  cin >> vp >> vd >> t >> f >> c;
  ll bijous = 0;
  if (vp < vd)
  {
    double dis = vd * vp * t / (vd - vp);
    while (dis < c)
    {
      dis = vd * (dis + vp * (f + dis / vd)) / (vd - vp);
      ++bijous;
    }
  }
  cout << bijous;
  return 0;
}
