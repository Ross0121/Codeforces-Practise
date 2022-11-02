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
  ll n;
  cin >> n;
  vll ind;
  ll ans = 1;
  fl(i, 0, n)
  {
    ll x;
    cin >> x;
    if (x == 1)
    {
      ind.pb(i);
    }
  }
  if (ind.size() > 1)
  {
    fl(i, 0, ind.size() - 1)
    {
      ans *= (ind[i + 1] - ind[i]);
    }
    cout << ans << "\n";
  }
  else if(ind.size()==1) cout << "1\n";
  else
    cout<<"0\n";


  return 0;
}
