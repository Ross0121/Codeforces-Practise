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

    ll n, ans = 1;
    set<ll> s;
    cin >> n;
    while (n % 2 == 0)
    {
      s.insert(2);
      n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
      while (n % i == 0)
      {
        s.insert(i);
        n /= i;
      }
    }

    if (n > 2)
    {
      s.insert(n);
    }

    for (auto it : s)
    {
      ans *= it;
    }

    cout << ans << endl;

  }
}
