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
  ll ar[n];
  fl(i, 0, n)
  {
    cin >> ar[i];
  }
  ll ans = 0;
  if (ar[0] == 0)
    ans++;
  fl(i, 1, n)
  {
    if (ar[i] == 0)
      ans++;
    else if (ar[i - 1] == 1 && ar[i] == 1)
    {
      ans++;
      ar[i] = 0;
    }
    else if (ar[i - 1] == 2 && ar[i] == 2)
    {
      ans++;
      ar[i] = 0;
    }
    else
    {
      if (ar[i - 1] == 1)
      {
        ar[i] = 2;
      }
      else if (ar[i - 1] == 2)
      {
        ar[i] = 1;
      }
    }

  }
  cout << ans;
  return 0;
}
