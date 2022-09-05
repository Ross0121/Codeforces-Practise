#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,m;
cin>>n>>m;
vector<pair<int,int>> p(m);
for(int i=0;i<m;i++)
    {
        cin>>p[i].second;
        cin>>p[i].first;
    }
sort(p.begin(),p.end());
reverse(p.begin(),p.end());
int j=0,sum=0;
while(m--)
{
  if(n>p[j].second)
     {
        n=n-p[j].second;
        sum+=p[j].second*p[j].first;
        j++;
        
     }
     else
     {
        sum+=n*p[j].first;
        n=0;
        
     }
}    
cout<<sum<<"\n";


return 0;
}
