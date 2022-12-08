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
    ll k ;
    cin >> s >> k;
    ll n = s.length();
    if (k <= n * (n - 1) / 2)
    {
      ll st = 0;
      ll a = 10;
      while (k)
      {
        if (st == n - 1)
          break;
        cout << "while" << k << ' ';
        ll mx = 0, j = st;
        fl(i, st, st + min(k + 1, n - st))
        {
          // cout << "fl";
          if ((int)(s[i] - '0') > mx)
          {
            mx = s[i] - '0';
            j = i;
            // cout << mx << "\n";
            // cout << "fl1 i " << i << "  ";
          }
          // cout << j << "   j in fl\n";
        }
        // cout << k << "k  " << j << "j " << st << "st \n";
        fl(i, 0, j - st)
        {
          swap(s[j - i], s[j - i - 1]);
          // cout << "fl2 ";
        }
        k -= (j - st);
        st++;
      }
      cout << s;
    }
    else
    {

      vll v(n);
      fl(i, 0, n)
      {
        v[i] = s[i] - '0';

      }
      sort(v.begin(), v.end());
      fl(i, 0, n)
      {
        cout << v[n - 1 - i];
      }
    }
  }
}
