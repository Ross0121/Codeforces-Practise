#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
// cin>>t;
t=1;
while(t--)
{
  int n;
  cin>>n;
map<int,string> mp;
mp[0]="";
mp[1]="";
mp[2]="2";
mp[3]="3";
mp[4]="322";
mp[5]="5";
mp[6]="53";
mp[7]="7";
mp[8]="7222";
mp[9]="7332";
string s,ans="";
cin>>s;

for(int i=0;i<n;i++)
{
  ans+=mp[s[i]-'0'];

}
// cout<<ans.length()<<"end";
sort(ans.begin(),ans.end(),greater<int>());
for(int i=0;i<ans.length();i++)
{
    cout<<ans[i];
}
}
return 0;
}









