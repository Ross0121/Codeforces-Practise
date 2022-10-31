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
  ll n;
  cin >> n;
  map<ll, vll> mp;
  set<ll>  st;

  fl(i, 0, n)
  {
    ll x;
    cin >> x;
    mp[x].pb(i + 1);
    st.insert(x);
  }
  vector<pll> ans;
  for (auto it : st)
  {
    // cout << "heee";
    ll flag = 1;
    if (mp[it].size() > 3)
    {
      // cout << "size" << mp[it].size() << endl;
      for (ll j = 0; j <= mp[it].size() - 3; j++)
      {
        // cout << mp[it][j] << " " << mp[it][j + 1] << " " << mp[it][j + 2] << endl;
        if ((mp[it][j] - mp[it][j + 1]) != (mp[it][j + 1] - mp[it][j + 2]))
          flag = 0;
      }
      if (flag)
        ans.pb({it, abs(mp[it][0] - mp[it][1])});

    }
    else if (mp[it].size() == 3)
    {
      if ((mp[it][0] - mp[it][1]) == (mp[it][1] - mp[it][2]))
      {
        ans.pb({it, abs(mp[it][0] - mp[it][1])});
      }
    }
    else if (mp[it].size() == 2)
    {
      ans.pb({it, abs(mp[it][0] - mp[it][1])});
    }
    else if (mp[it].size() == 1)
    {
      ans.pb({it, 0});
    }

  }
  cout << ans.size() << "\n";
  fl(i, 0, ans.size())
  {
    cout << ans[i].fi << " " << ans[i].se << endl;
  }

  return 0;
}
