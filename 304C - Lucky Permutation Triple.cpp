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
};

//practise everyday
//don't rush submission check all edge cases

int main()
{

  ll t;
  // cin >> t;
  t = 1;
  while (t--)
  {
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
      cout << "-1\n";
    }
    else
    {
      ll a[n], b[n];
      fl(i, 0, n)
      {
        cout << i << " ";
        a[i] = i;
      }
      cout << endl;
      cout << n - 1 << " ";
      b[0] = n - 1;
      fl(i, 0, n - 1)
      {
        cout << i << " ";
        b[i + 1] = i;
      }
      cout << endl;
      fl(i, 0, n)
      {
        cout << (a[i] + b[i]) % n << " ";
      }
    }
  }

}
