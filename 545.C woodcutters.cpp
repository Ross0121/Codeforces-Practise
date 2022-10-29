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
  ll cor[n], h[n];
  fl(i, 0, n)
  {
    cin >> cor[i] >> h[i];
  }
  if (n == 1)
    cout << "1";
  else
  {
    ll ans = 2;
    ll diff[n];
    fl(i, 1, n )
    {
      diff[i] = cor[i] - cor[i - 1] - 1;
    }
    fl(i, 1, n - 1)
    {
      // cout << diff[i] << ' ' << h[i]  << ' ' << diff[i + 1] << endl;
      if (diff[i] >= h[i] )
      { diff[i] -= h[i];
        ans++;
        // cout << h[i] << "hi" << endl;
      }
      else if (diff[i + 1] >= h[i] )
      { diff[i + 1] -= h[i];
        ans++;
        // cout << h[i] << "hi+1 " << endl;
      }
    }

    cout << ans;
  }

  return 0;
}

