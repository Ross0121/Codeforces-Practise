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
    ll a, b;
    cin >> a >> b;
    ll a1 = a, b1 = b;
    vll av(4, 0), bv(4, 0);
    ll at = 0, bt = 0;
    while (a % 2 == 0)
    {
      av[0]++;
      at++;
      a /= 2;
    }

    while (a % 3 == 0)
    {
      av[1]++;
      at++;
      a /= 3;
    }

    while (a % 5 == 0)
    {
      av[2]++;
      at++;
      a /= 5;
    }

    fl(i, 0, av[0])
    {
      a1 /= 2;
      // cout << "a1 " << a1;
    }
    fl(i, 0, av[1])
    {
      a1 /= 3;
    }
    fl(i, 0, av[2])
    {
      a1 /= 5;
    }

    av[3] = a1;

    while (b % 2 == 0)
    {
      bv[0]++;
      bt++;
      b /= 2;
    }

    while (b % 3 == 0)
    {
      bv[1]++;
      bt++;
      b /= 3;
    }

    while (b % 5 == 0)
    {
      bv[2]++;
      bt++;
      b /= 5;
    }


    fl(i, 0, bv[0])
    {
      b1 /= 2;
    }
    fl(i, 0, bv[1])
    {
      b1 /= 3;
    }
    fl(i, 0, bv[2])
    {
      b1 /= 5;
    }

    bv[3] = b1;


    if (av[3] != bv[3])
    {
      cout << "-1";
    }
    else
    {
      // cout << "av bv 0 " << av[0] << " " << bv[0] << "\n";
      // cout << "av bv 1 " << av[1] << " " << bv[1] << "\n";
      // cout << "av bv 2 " << av[2] << " " << bv[2] << "\n";
      // cout << "av bv 3 " << av[3] << " " << bv[3] << "\n";
      ll ans = abs(av[0] - bv[0]) + abs(av[1] - bv[1]) + abs(av[2] - bv[2]);
      cout << ans << endl;
    }

  }
}
