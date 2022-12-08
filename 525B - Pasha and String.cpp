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
    string s;
    cin >> s;
    ll n;
    cin >> n;
    vll v(s.length() / 2, 0);

    fl(i, 0, n)
    {
      ll nn;
      cin >> nn;

      v[nn - 1]++;
    }
    // cout << v[0] << " " << v[1] << " " << v[2];
    fl(i, 0, s.length() / 2)
    {
      if (i != 0)
        v[i] = v[i] + v[i - 1];
      if (v[i] % 2 == 1)
      {
        swap(s[i], s[s.length() - 1 - i]);
        // cout << "ss" << s[i] << endl;
      }
    }
    cout << s;
  }
}
